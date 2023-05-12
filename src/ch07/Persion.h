#ifndef SRC_CH07_PERSION_H_
// Copyright 2023 <guodp9u0@gmail.com>
#define SRC_CH07_PERSION_H_

#include <iostream>
#include <string>

namespace ch07
{
  class Persion
  {
  private:
    std::string name;
    std::string address;

  public:
    /**
     * @brief Construct a new Persion object
     */
    Persion(): Persion("Jim", "Default address") {}

    /**
     * @brief Construct a new Persion object
     * @param name name of persion
     * @param address  address of persion
     */
    Persion(std::string name, std::string address)
      : name(name), address(address) {
    }

    /**
     * @brief get name of persion
     * @return std::string
     */
    inline std::string get_name() const {
      return this->name;
    }

    /**
     * @brief get address of persion
     * @return std::string
     */
    inline std::string get_address() const {
      return this->address;
    }
  };
}  // namespace ch07
#endif  // SRC_CH07_PERSION_H_
