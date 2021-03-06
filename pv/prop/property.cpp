/*
 * This file is part of the PulseView project.
 *
 * Copyright (C) 2012 Joel Holdsworth <joel@airwebreathe.org.uk>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include "property.hpp"

namespace pv {
namespace prop {

Property::Property(QString name, QString desc, Getter getter, Setter setter) :
	getter_(getter),
	setter_(setter),
	name_(name),
	desc_(desc)
{
}

const QString& Property::name() const
{
	return name_;
}

const QString& Property::desc() const
{
	return desc_;
}

bool Property::labeled_widget() const
{
	return false;
}

}  // namespace prop
}  // namespace pv
