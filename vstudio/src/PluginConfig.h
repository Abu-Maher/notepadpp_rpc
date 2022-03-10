// Copyright (C) 2022 Zukaritasu
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#pragma once

struct PluginConfig
{
	__int64 _client_id;
	bool _enable;
	bool _show_sz;
	bool _show_lang;
};

void LoadDefaultConfig(PluginConfig& config);
void SavePluginConfig(const PluginConfig& config);
void LoadPluginConfig(PluginConfig& config);

