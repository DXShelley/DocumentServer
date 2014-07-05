﻿/*
 * (c) Copyright Ascensio System SIA 2010-2014
 *
 * This program is a free software product. You can redistribute it and/or 
 * modify it under the terms of the GNU Affero General Public License (AGPL) 
 * version 3 as published by the Free Software Foundation. In accordance with 
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect 
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For 
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under 
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
 #pragma once
#include "../PPTXShape.h"

namespace OOXMLShapes
{
	class CRibbon2 : public CPPTXShape
	{
		public:
			CRibbon2()
			{
				LoadFromXML(
					_T("<ooxml-shape>")
					_T("<avLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"adj1\" fmla=\"val 16667\" />")
					  _T("<gd name=\"adj2\" fmla=\"val 50000\" />")
					_T("</avLst>")
					_T("<gdLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"a1\" fmla=\"pin 0 adj1 33333\" />")
					  _T("<gd name=\"a2\" fmla=\"pin 25000 adj2 75000\" />")
					  _T("<gd name=\"x10\" fmla=\"+- r 0 wd8\" />")
					  _T("<gd name=\"dx2\" fmla=\"*/ w a2 200000\" />")
					  _T("<gd name=\"x2\" fmla=\"+- hc 0 dx2\" />")
					  _T("<gd name=\"x9\" fmla=\"+- hc dx2 0\" />")
					  _T("<gd name=\"x3\" fmla=\"+- x2 wd32 0\" />")
					  _T("<gd name=\"x8\" fmla=\"+- x9 0 wd32\" />")
					  _T("<gd name=\"x5\" fmla=\"+- x2 wd8 0\" />")
					  _T("<gd name=\"x6\" fmla=\"+- x9 0 wd8\" />")
					  _T("<gd name=\"x4\" fmla=\"+- x5 0 wd32\" />")
					  _T("<gd name=\"x7\" fmla=\"+- x6 wd32 0\" />")
					  _T("<gd name=\"dy1\" fmla=\"*/ h a1 200000\" />")
					  _T("<gd name=\"y1\" fmla=\"+- b 0 dy1\" />")
					  _T("<gd name=\"dy2\" fmla=\"*/ h a1 100000\" />")
					  _T("<gd name=\"y2\" fmla=\"+- b 0 dy2\" />")
					  _T("<gd name=\"y4\" fmla=\"+- t dy2 0\" />")
					  _T("<gd name=\"y3\" fmla=\"+/ y4 b 2\" />")
					  _T("<gd name=\"hR\" fmla=\"*/ h a1 400000\" />")
					  _T("<gd name=\"y6\" fmla=\"+- b 0 hR\" />")
					  _T("<gd name=\"y7\" fmla=\"+- y1 0 hR\" />")
					_T("</gdLst>")
					_T("<ahLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<ahXY gdRefY=\"adj1\" minY=\"0\" maxY=\"33333\">")
						_T("<pos x=\"hc\" y=\"y2\" />")
					  _T("</ahXY>")
					  _T("<ahXY gdRefX=\"adj2\" minX=\"25000\" maxX=\"75000\">")
						_T("<pos x=\"x2\" y=\"b\" />")
					  _T("</ahXY>")
					_T("</ahLst>")
					_T("<cxnLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<cxn ang=\"3cd4\">")
						_T("<pos x=\"hc\" y=\"t\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"cd2\">")
						_T("<pos x=\"wd8\" y=\"y3\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"cd4\">")
						_T("<pos x=\"hc\" y=\"y2\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"0\">")
						_T("<pos x=\"x10\" y=\"y3\" />")
					  _T("</cxn>")
					_T("</cxnLst>")
					_T("<rect l=\"x2\" t=\"t\" r=\"x9\" b=\"y2\" xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\" />")
					_T("<pathLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<path stroke=\"false\" extrusionOk=\"false\">")
						_T("<moveTo>")
						  _T("<pt x=\"l\" y=\"b\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"b\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x3\" y=\"y1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"cd2\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x8\" y=\"y2\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"cd2\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x7\" y=\"y1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"r\" y=\"b\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x10\" y=\"y3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"r\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x9\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x9\" y=\"hR\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"0\" swAng=\"-5400000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x3\" y=\"t\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"-5400000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"l\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"wd8\" y=\"y3\" />")
						_T("</lnTo>")
						_T("<close />")
					  _T("</path>")
					  _T("<path stroke=\"false\" fill=\"darkenLess\" extrusionOk=\"false\">")
						_T("<moveTo>")
						  _T("<pt x=\"x5\" y=\"y6\" />")
						_T("</moveTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"0\" swAng=\"-5400000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x3\" y=\"y1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"cd2\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x5\" y=\"y2\" />")
						_T("</lnTo>")
						_T("<close />")
						_T("<moveTo>")
						  _T("<pt x=\"x6\" y=\"y6\" />")
						_T("</moveTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd2\" swAng=\"cd4\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x8\" y=\"y1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x6\" y=\"y2\" />")
						_T("</lnTo>")
						_T("<close />")
					  _T("</path>")
					  _T("<path fill=\"none\" extrusionOk=\"false\">")
						_T("<moveTo>")
						  _T("<pt x=\"l\" y=\"b\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"wd8\" y=\"y3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"l\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"hR\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd2\" swAng=\"cd4\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x8\" y=\"t\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"cd4\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x9\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x9\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"r\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x10\" y=\"y3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"r\" y=\"b\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x7\" y=\"b\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"cd2\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x8\" y=\"y1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x3\" y=\"y2\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"y1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"cd2\" />")
						_T("<close />")
						_T("<moveTo>")
						  _T("<pt x=\"x5\" y=\"y2\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x5\" y=\"y6\" />")
						_T("</lnTo>")
						_T("<moveTo>")
						  _T("<pt x=\"x6\" y=\"y6\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x6\" y=\"y2\" />")
						_T("</lnTo>")
						_T("<moveTo>")
						  _T("<pt x=\"x2\" y=\"y7\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"y4\" />")
						_T("</lnTo>")
						_T("<moveTo>")
						  _T("<pt x=\"x9\" y=\"y4\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x9\" y=\"y7\" />")
						_T("</lnTo>")
					  _T("</path>")
					_T("</pathLst>")
					_T("</ooxml-shape>")
				);
			}
	};
}