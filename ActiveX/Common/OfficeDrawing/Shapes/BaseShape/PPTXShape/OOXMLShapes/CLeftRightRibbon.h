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
	class CLeftRightRibbon : public CPPTXShape
	{
		public:
			CLeftRightRibbon()
			{
				LoadFromXML(
					_T("<ooxml-shape>")
					_T("<avLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"adj1\" fmla=\"val 50000\" />")
					  _T("<gd name=\"adj2\" fmla=\"val 50000\" />")
					  _T("<gd name=\"adj3\" fmla=\"val 16667\" />")
					_T("</avLst>")
					_T("<gdLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"a3\" fmla=\"pin 0 adj3 33333\" />")
					  _T("<gd name=\"maxAdj1\" fmla=\"+- 100000 0 a3\" />")
					  _T("<gd name=\"a1\" fmla=\"pin 0 adj1 maxAdj1\" />")
					  _T("<gd name=\"w1\" fmla=\"+- wd2 0 wd32\" />")
					  _T("<gd name=\"maxAdj2\" fmla=\"*/ 100000 w1 ss\" />")
					  _T("<gd name=\"a2\" fmla=\"pin 0 adj2 maxAdj2\" />")
					  _T("<gd name=\"x1\" fmla=\"*/ ss a2 100000\" />")
					  _T("<gd name=\"x4\" fmla=\"+- r 0 x1\" />")
					  _T("<gd name=\"dy1\" fmla=\"*/ h a1 200000\" />")
					  _T("<gd name=\"dy2\" fmla=\"*/ h a3 -200000\" />")
					  _T("<gd name=\"ly1\" fmla=\"+- vc dy2 dy1\" />")
					  _T("<gd name=\"ry4\" fmla=\"+- vc dy1 dy2\" />")
					  _T("<gd name=\"ly2\" fmla=\"+- ly1 dy1 0\" />")
					  _T("<gd name=\"ry3\" fmla=\"+- b 0 ly2\" />")
					  _T("<gd name=\"ly4\" fmla=\"*/ ly2 2 1\" />")
					  _T("<gd name=\"ry1\" fmla=\"+- b 0 ly4\" />")
					  _T("<gd name=\"ly3\" fmla=\"+- ly4 0 ly1\" />")
					  _T("<gd name=\"ry2\" fmla=\"+- b 0 ly3\" />")
					  _T("<gd name=\"hR\" fmla=\"*/ a3 ss 400000\" />")
					  _T("<gd name=\"x2\" fmla=\"+- hc 0 wd32\" />")
					  _T("<gd name=\"x3\" fmla=\"+- hc wd32 0\" />")
					  _T("<gd name=\"y1\" fmla=\"+- ly1 hR 0\" />")
					  _T("<gd name=\"y2\" fmla=\"+- ry2 0 hR\" />")
					_T("</gdLst>")
					_T("<ahLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<ahXY gdRefY=\"adj1\" minY=\"0\" maxY=\"maxAdj1\">")
						_T("<pos x=\"x4\" y=\"ry2\" />")
					  _T("</ahXY>")
					  _T("<ahXY gdRefX=\"adj2\" minX=\"0\" maxX=\"maxAdj2\">")
						_T("<pos x=\"x1\" y=\"t\" />")
					  _T("</ahXY>")
					  _T("<ahXY gdRefY=\"adj3\" minY=\"0\" maxY=\"33333\">")
						_T("<pos x=\"x3\" y=\"ry2\" />")
					  _T("</ahXY>")
					_T("</ahLst>")
					_T("<cxnLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<cxn ang=\"0\">")
						_T("<pos x=\"r\" y=\"ry3\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"cd4\">")
						_T("<pos x=\"x4\" y=\"b\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"cd4\">")
						_T("<pos x=\"x1\" y=\"ly4\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"cd2\">")
						_T("<pos x=\"l\" y=\"ly2\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"3cd4\">")
						_T("<pos x=\"x1\" y=\"t\" />")
					  _T("</cxn>")
					  _T("<cxn ang=\"3cd4\">")
						_T("<pos x=\"x4\" y=\"ry1\" />")
					  _T("</cxn>")
					_T("</cxnLst>")
					_T("<rect l=\"x1\" t=\"ly1\" r=\"x4\" b=\"ry4\" xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\" />")
					_T("<pathLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<path stroke=\"false\" extrusionOk=\"false\">")
						_T("<moveTo>")
						  _T("<pt x=\"l\" y=\"ly2\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"t\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"ly1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"hc\" y=\"ly1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"cd2\" />")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"ry2\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"ry1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"r\" y=\"ry3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"b\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"ry4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"hc\" y=\"ry4\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"cd4\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"ly3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"ly3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"ly4\" />")
						_T("</lnTo>")
						_T("<close />")
					  _T("</path>")
					  _T("<path stroke=\"false\" fill=\"darkenLess\" extrusionOk=\"false\">")
						_T("<moveTo>")
						  _T("<pt x=\"x3\" y=\"y1\" />")
						_T("</moveTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"0\" swAng=\"cd4\" />")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x3\" y=\"ry2\" />")
						_T("</lnTo>")
						_T("<close />")
					  _T("</path>")
					  _T("<path fill=\"none\" extrusionOk=\"false\">")
						_T("<moveTo>")
						  _T("<pt x=\"l\" y=\"ly2\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"t\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"ly1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"hc\" y=\"ly1\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"cd2\" />")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"3cd4\" swAng=\"-10800000\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"ry2\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"ry1\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"r\" y=\"ry3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"b\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x4\" y=\"ry4\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"hc\" y=\"ry4\" />")
						_T("</lnTo>")
						_T("<arcTo wR=\"wd32\" hR=\"hR\" stAng=\"cd4\" swAng=\"cd4\" />")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"ly3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"ly3\" />")
						_T("</lnTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x1\" y=\"ly4\" />")
						_T("</lnTo>")
						_T("<close />")
						_T("<moveTo>")
						  _T("<pt x=\"x3\" y=\"y1\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x3\" y=\"ry2\" />")
						_T("</lnTo>")
						_T("<moveTo>")
						  _T("<pt x=\"x2\" y=\"y2\" />")
						_T("</moveTo>")
						_T("<lnTo>")
						  _T("<pt x=\"x2\" y=\"ly3\" />")
						_T("</lnTo>")
					  _T("</path>")
					_T("</pathLst>")
					_T("</ooxml-shape>")
				);
			}
	};
}