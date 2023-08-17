/*
i_synchronize_motor_cmd.hpp
Copyright (C) 2020 Niryo
All rights reserved.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http:// www.gnu.org/licenses/>.
*/

#ifndef I_SYNCHRONIZE_MOTOR_CMD_H
#define I_SYNCHRONIZE_MOTOR_CMD_H

#include "common/model/i_object.hpp"

namespace common
{
namespace model
{

/**
 * @brief The ISynchronizeMotorCmd class
 */
class ISynchronizeMotorCmd : public IObject
{
public:
    ~ISynchronizeMotorCmd() override = default;

    virtual int getCmdType() const = 0;

    virtual bool isStepperCmd() const = 0;
    virtual bool isDxlCmd() const = 0;

protected:
    ISynchronizeMotorCmd() = default;
    // see https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c67-a-polymorphic-class-should-suppress-public-copymove
    ISynchronizeMotorCmd( const ISynchronizeMotorCmd& ) = default;
    ISynchronizeMotorCmd( ISynchronizeMotorCmd&& ) = default;

    ISynchronizeMotorCmd& operator= ( ISynchronizeMotorCmd && ) = default;
    ISynchronizeMotorCmd& operator= ( const ISynchronizeMotorCmd& ) = default;
};

} // namespace model
} // namespace common

#endif // I_SYNCHRONIZE_MOTOR_CMD_H
