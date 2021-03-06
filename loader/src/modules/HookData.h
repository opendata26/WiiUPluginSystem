/****************************************************************************
 * Copyright (C) 2018 Maschell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/

#ifndef _HOOK_DATA_H_
#define _HOOK_DATA_H_

#include <wups.h>
#include <string>

class HookData{

public:
    HookData(void * function_pointer, wups_loader_hook_type_t type){
        this->function_pointer = function_pointer;
        this->type = type;
    }

    ~HookData(){

    }

    void * getFunctionPointer(){
        return function_pointer;
    }

    wups_loader_hook_type_t getType(){
        return this->type;
    }
private:
     void * function_pointer;
     wups_loader_hook_type_t type;
};


#endif
