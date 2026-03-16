/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcao <lcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:08:47 by lcao              #+#    #+#             */
/*   Updated: 2026/03/11 18:19:52 by lcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    data.someData = 42;

    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Serialized: " << serialized << std::endl;

    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized: " << deserialized->someData << std::endl;

    std::cout << "\n--- Address Comparison ---" << std::endl;
    std::cout << "Original address:     " << &data << std::endl;
    std::cout << "Deserialized address: " << deserialized << std::endl;
    
    if (&data == deserialized) {
        std::cout << "Success: Pointers are exactly the same!" << std::endl;
    } else {
        std::cout << "Error: Pointers do not match!" << std::endl;
    }

    return 0;
}
