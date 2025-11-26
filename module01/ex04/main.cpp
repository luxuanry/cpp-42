/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:56:07 by lcao              #+#    #+#             */
/*   Updated: 2025/11/24 17:49:58 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string replace_all(std::string content, const std::string& s1, const std::string& s2)
{
    std::string result = "";
    size_t current_pos = 0;
    size_t found_pos;
    
    while((found_pos = content.find(s1, current_pos)) != std::string::npos)
    {
        result += content.substr(current_pos, found_pos - current_pos);
        result += s2;
        current_pos = found_pos + s1.length();
    }
    result += content.substr(current_pos);
    return result;
}
int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    const std::string filename = av[1];
    const std::string s1 = av[2];
    const std::string s2 = av[3];
    
    if(s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }
    std::ifstream ifs(filename.c_str());
    if(!ifs.is_open())
    {
        std::cerr << "Error: could not open the file: "<< filename << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(ifs)),
                         std::istreambuf_iterator<char>());
    ifs.close();

    std::string replaced_content = replace_all(content, s1, s2);
    std::string output_filename = filename + ".replace";
    std::ofstream ofs(output_filename.c_str());
    if (!ofs.is_open()) {
        std::cerr << "Error: Could not create output file: " << output_filename << std::endl;
        return 1;
    }

    ofs << replaced_content;
    ofs.close();

    return 0;
}
