#define EXP 1
#include <comutil.h>
#include "C.h"
#include "CPP.h"
#include <GdiPlus.h>

#pragma comment(lib, "comsuppw.lib")
#pragma comment(lib, "GdiPlus.lib")
using namespace Gdiplus;
using namespace Gdiplus::DllExports;
EasyX_C_API HWND __stdcall initgraph(int width,int height){
	return initgraph_cpp(width, height);
}
EasyX_C_API HWND __stdcall initgraph_with_flag(int width, int height, int flag) {
	return initgraph_cpp(width, height, flag);
}
EasyX_C_API void __stdcall closegraph() {
	return closegraph_cpp();
}
EasyX_C_API void __stdcall cleardevice() {
	cleardevice_cpp();
}
EasyX_C_API void __stdcall clearcliprgn() {
	clearcliprgn_cpp();
}
EasyX_C_API void __stdcall getaspectratio(float *pxasp, float *pyasp) {
	getaspectratio_cpp(pxasp, pyasp);
}
EasyX_C_API void __stdcall graphdefaults() {
	graphdefaults_cpp();
}
EasyX_C_API void __stdcall setaspectratio(
	float xasp,
	float yasp
) {
	setaspectratio_cpp(xasp, yasp);
}
EasyX_C_API void __stdcall setcliprgn(HRGN hrgn) {
	setcliprgn_cpp(hrgn);
}

EasyX_C_API COLORREF __stdcall RGBtoGRAY(COLORREF rgb) {
	return RGBtoGRAY_cpp(rgb);
}
EasyX_C_API void __stdcall RGBtoHSL(COLORREF rgb, float *H, float *S, float *L) {
	RGBtoHSL_cpp(rgb, H, S, L);
}
EasyX_C_API void __stdcall RGBtoHSV(COLORREF rgb, float *H, float *S, float *V) {
	RGBtoHSV_cpp(rgb, H, S, V);
}
EasyX_C_API COLORREF __stdcall HSLtoRGB(float H, float S, float L) {
	return HSLtoRGB_cpp(H, S, L);
}
EasyX_C_API COLORREF __stdcall HSVtoRGB(float H, float S, float V) {
	return HSVtoRGB_cpp(H, S, V);
}

EasyX_C_API COLORREF __stdcall  getlinecolor() {
	return getlinecolor_cpp();
}			// 获取当前线条颜色
EasyX_C_API void __stdcall  setlinecolor(COLORREF color) {
	setlinecolor_cpp(color);
}	// 设置当前线条颜色
EasyX_C_API COLORREF __stdcall  gettextcolor() {
	return gettextcolor_cpp();
}			// 获取当前文字颜色
EasyX_C_API void  __stdcall settextcolor(COLORREF color) {
	settextcolor_cpp(color);
}	// 设置当前文字颜色
EasyX_C_API COLORREF __stdcall  getfillcolor() {
	return getfillcolor_cpp();
}			// 获取当前填充颜色
EasyX_C_API void  __stdcall setfillcolor(COLORREF color) {
	setfillcolor_cpp(color);
}	// 设置当前填充颜色
EasyX_C_API COLORREF  __stdcall getbkcolor() {
	return getbkcolor_cpp();
}				// 获取当前绘图背景色
EasyX_C_API void  __stdcall setbkcolor(COLORREF color) {
	setbkcolor_cpp(color);
}	// 设置当前绘图背景色
EasyX_C_API int   __stdcall getbkmode() {
	return getbkmode_cpp();
}					// 获取背景混合模式
EasyX_C_API void  __stdcall setbkmode(int mode) {
	setbkmode_cpp(mode);
}			// 设置背景混合模式

EasyX_C_API int  __stdcall  getrop2() {
	return getrop2_cpp();
}						// 获取前景的二元光栅操作模式
EasyX_C_API void  __stdcall setrop2(int mode) {
	setrop2_cpp(mode);
}				// 设置前景的二元光栅操作模式
EasyX_C_API int  __stdcall  getpolyfillmode() {
	return getpolyfillmode_cpp();
}				// 获取多边形填充模式
EasyX_C_API void  __stdcall setpolyfillmode(int mode) {
	setpolyfillmode_cpp(mode);
}		// 设置多边形填充模式


		// 绘图函数

EasyX_C_API COLORREF  __stdcall getpixel(int x, int y) {
	return getpixel_cpp(x, y);
}				// 获取点的颜色
EasyX_C_API void  __stdcall putpixel(int x, int y, COLORREF color) {
	putpixel_cpp(x, y, color);
}	// 画点

EasyX_C_API void  __stdcall moveto(int x, int y) {
	moveto_cpp(x, y);
}						// 移动当前点(绝对坐标)
EasyX_C_API void  __stdcall moverel(int dx, int dy) {
	moverel_cpp(dx, dy);
}					// 移动当前点(相对坐标)

EasyX_C_API void  __stdcall line(int x1, int y1, int x2, int y2) {
	line_cpp(x1, y1, x2, y2);
}		// 画线
EasyX_C_API void  __stdcall linerel(int dx, int dy) {
	linerel_cpp(dx, dy);
}					// 画线(至相对坐标)
EasyX_C_API void  __stdcall lineto(int x, int y) {
	lineto_cpp(x, y);
}						// 画线(至绝对坐标)

EasyX_C_API void  __stdcall rectangle(int left, int top, int right, int bottom) {
	rectangle_cpp(left, top, right, bottom);
}	// 画矩形
EasyX_C_API void  __stdcall fillrectangle(int left, int top, int right, int bottom) {
	fillrectangle_cpp(left, top, right, bottom);
}	// 画填充矩形(有边框)
EasyX_C_API void  __stdcall solidrectangle(int left, int top, int right, int bottom) {
	solidrectangle_cpp(left, top, right, bottom );
}	// 画填充矩形(无边框)
EasyX_C_API void  __stdcall clearrectangle(int left, int top, int right, int bottom) {
	clearrectangle_cpp(left, top, right, bottom);
}	// 清空矩形区域

EasyX_C_API void  __stdcall circle(int x, int y, int radius) {
	circle_cpp(x, y, radius);
}		// 画圆
EasyX_C_API void  __stdcall fillcircle(int x, int y, int radius) {
	fillcircle_cpp(x, y, radius);
}		// 画填充圆(有边框)
EasyX_C_API void  __stdcall solidcircle(int x, int y, int radius) {
	solidcircle_cpp(x, y, radius);
}		// 画填充圆(无边框)
EasyX_C_API void  __stdcall clearcircle(int x, int y, int radius) {
	clearcircle_cpp(x, y, radius);
}		// 清空圆形区域

EasyX_C_API void  __stdcall ellipse(int left, int top, int right, int bottom) {
	ellipse_cpp(left, top, right, bottom);
}	// 画椭圆
EasyX_C_API void  __stdcall fillellipse(int left, int top, int right, int bottom) {
	fillellipse_cpp(left, top, right, bottom);
}	// 画填充椭圆(有边框)
EasyX_C_API void  __stdcall solidellipse(int left, int top, int right, int bottom) {
	solidellipse_cpp(left, top, right, bottom);
}	// 画填充椭圆(无边框)
EasyX_C_API void  __stdcall clearellipse(int left, int top, int right, int bottom) {
	clearellipse_cpp(left, top, right, bottom);
}	// 清空椭圆形区域

EasyX_C_API void  __stdcall roundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	roundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 画圆角矩形
EasyX_C_API void  __stdcall fillroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	fillroundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 画填充圆角矩形(有边框)
EasyX_C_API void  __stdcall solidroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	solidroundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 画填充圆角矩形(无边框)
EasyX_C_API void  __stdcall clearroundrect(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	clearroundrect_cpp(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 清空圆角矩形区域

EasyX_C_API void  __stdcall arc(int left, int top, int right, int bottom, double stangle, double endangle) {
	arc_cpp(left, top, right, bottom, stangle, endangle);
}	// 画椭圆弧(起始角度和终止角度为弧度制)
EasyX_C_API void __stdcall  pie(int left, int top, int right, int bottom, double stangle, double endangle) {
	pie_cpp(left, top, right, bottom, stangle, endangle);
}	// 画椭圆扇形(起始角度和终止角度为弧度制)
EasyX_C_API void  __stdcall fillpie(int left, int top, int right, int bottom, double stangle, double endangle) {
	fillpie_cpp(left, top, right, bottom, stangle, endangle);
}	// 画填充椭圆扇形(有边框)
EasyX_C_API void  __stdcall solidpie(int left, int top, int right, int bottom, double stangle, double endangle) {
	fillpie_cpp(left, top, right, bottom, stangle, endangle);
}	// 画填充椭圆扇形(无边框)
EasyX_C_API void  __stdcall clearpie(int left, int top, int right, int bottom, double stangle, double endangle) {
	clearpie_cpp(left, top, right, bottom, stangle, endangle);
}	// 清空椭圆扇形区域

EasyX_C_API void  __stdcall polyline(const POINT *points, int num) {
	polyline_cpp(points, num);
}								// 画多条连续的线
EasyX_C_API void  __stdcall polygon(const POINT *points, int num) {
	polygon_cpp(points, num);
}								// 画多边形
EasyX_C_API void  __stdcall fillpolygon(const POINT *points, int num) {
	fillpolygon_cpp(points, num);
}								// 画填充的多边形(有边框)
EasyX_C_API void  __stdcall solidpolygon(const POINT *points, int num) {
solidpolygon_cpp(points, num);
}								// 画填充的多边形(无边框)
EasyX_C_API void  __stdcall clearpolygon(const POINT *points, int num) { 
	clearpolygon_cpp(points, num); 
}							// 清空多边形区域

EasyX_C_API void  __stdcall polybezier(const POINT *points, int num) {
	polygon_cpp(points, num);
}									// 画贝塞尔曲线
EasyX_C_API void  __stdcall floodfill(int x, int y, COLORREF color) {
	floodfill_cpp(x, y, color);
}	// 填充区域

EasyX_C_API void  __stdcall floodfill_with_type(int x, int y, COLORREF color, int filltype) {
	floodfill_cpp(x, y, color,filltype);
}


EasyX_C_API void  __stdcall outtext(LPCTSTR str) {
	outtext_cpp(str);
}					// 在当前位置输出字符串
EasyX_C_API void  __stdcall outtext_tchar(TCHAR c) {
	outtext_cpp(c);
}						// 在当前位置输出字符
EasyX_C_API void  __stdcall outtextxy(int x, int y, LPCTSTR str) {
	outtextxy_cpp(x, y, str);
}	// 在指定位置输出字符串
EasyX_C_API void  __stdcall outtextxy_tchar(int x, int y, TCHAR c) {
	outtextxy_cpp(x, y, c);
}		// 在指定位置输出字符
EasyX_C_API int  __stdcall textwidth(LPCTSTR str) {
	return textwidth_cpp(str);
}					// 获取字符串占用的像素宽
EasyX_C_API int  __stdcall textwidth_tchar(TCHAR c) {
	return textwidth_cpp(c);
}						// 获取字符占用的像素宽
EasyX_C_API int  __stdcall textheight(LPCTSTR str) {
	return textheight_cpp(str);
}				// 获取字符串占用的像素高
EasyX_C_API int  __stdcall textheight_tchar(TCHAR c) {
	return textheight_cpp(c);
}					// 获取字符占用的像素高
EasyX_C_API int  __stdcall drawtext(LPCTSTR str, RECT* pRect, UINT uFormat) {
	return drawtext_cpp(str, pRect, uFormat);
}	// 在指定区域内以指定格式输出字符串
EasyX_C_API int  __stdcall drawtext_tchar(TCHAR c, RECT* pRect, UINT uFormat) {
	return drawtext_cpp(c, pRect, uFormat);
}		// 在指定区域内以指定格式输出字符
EasyX_C_API void __stdcall	getlinestyle(LINESTYLE* pstyle) {
	getlinestyle_cpp(pstyle);
}						// 获取当前画线样式
EasyX_C_API void  __stdcall setlinestyle(const LINESTYLE* pstyle) {
	setlinestyle_cpp(pstyle);
}					// 设置当前画线样式
EasyX_C_API void  __stdcall setlinestyle_with_style(int style) {
	setlinestyle_cpp(style,1);
}	// 设置当前画线样式
EasyX_C_API void  __stdcall setlinestyle_with_style_thickness(int style, int thickness) {
	setlinestyle_cpp(style, thickness);
}
EasyX_C_API void  __stdcall setlinestyle_with_thickness_style_puserstyle_puserstylecount(int style, int thickness, const DWORD *puserstyle, DWORD userstylecount) {
	setlinestyle_cpp(style, thickness, puserstyle, userstylecount);
}	// 设置当前画线样式
EasyX_C_API void  __stdcall getfillstyle(FILLSTYLE* pstyle) {
	getfillstyle_cpp(pstyle);
}						// 获取当前填充样式
EasyX_C_API void  __stdcall setfillstyle(const FILLSTYLE* pstyle) {
	setfillstyle_cpp(pstyle);
}					// 设置当前填充样式
EasyX_C_API void  __stdcall setfillstyle_with_style(int style) {
	setfillstyle_cpp(style,0L);
}		// 设置当前填充样式
EasyX_C_API void  __stdcall setfillstyle_with_style_hatch(int style, long hatch) {
	setfillstyle_cpp(style, hatch);
	}
EasyX_C_API void  __stdcall setfillstyle_with_style_pattern(int style,long hatch ,IMAGE* ppattern) {
	setfillstyle_cpp(style, hatch, ppattern);
	}
	
EasyX_C_API void  __stdcall setfillstyle_with_pattern8x8(BYTE* ppattern8x8) {
	setfillstyle_cpp(ppattern8x8);
}						// 设置当前填充样式

EasyX_C_API bool __stdcall MouseHit() {
	return MouseHit_cpp();
}			// 检查是否存在鼠标消息
EasyX_C_API MOUSEMSG __stdcall  GetMouseMsg() {
	MOUSEMSG m;
	GetMouseMsg_cpp();
	m.uMsg = GetMouseMsg_cpp_getuMsg();
	m.mkCtrl = Get_MouseMsg_cpp_getmkCtrl();
	m.mkShift = Get_MouseMsg_cpp_getmkShift();
	m.mkLButton = Get_MouseMsg_cpp_getmkLButton();
	m.mkMButton = Get_MouseMsg_cpp_getmkMButton();
	m.mkRButton = Get_MouseMsg_cpp_getmkRButton();
	m.x = Get_MouseMsg_cpp_getx();
	m.y = Get_MouseMsg_cpp_gety();
	return m;
}		// 获取一个鼠标消息。如果没有，就等待
EasyX_C_API void __stdcall FlushMouseMsgBuffer() {
	FlushMouseMsgBuffer_cpp();
}	// 清空鼠标消息缓冲区
EasyX_C_API LINESTYLE __stdcall CreateLS() {
	return createLineStyle();
}
EasyX_C_API LINESTYLE __stdcall CreateLSFromLS(LINESTYLE s) {
	return createLineStyle_from_one(s);
}
EasyX_C_API void __stdcall SetLS_Style(LINESTYLE s, DWORD style) {
	setLineStyle_style(s, style);
}
EasyX_C_API void __stdcall SetLS_Thickness(LINESTYLE s, DWORD thickness) {
	setLineStyle_thickness(s, thickness);
}
EasyX_C_API void __stdcall SetLS_Puserstyle(LINESTYLE s, DWORD *puserstyle) {
	setLineStyle_puserstyle(s, puserstyle);
}
EasyX_C_API void __stdcall SetLS_Userstylecount(LINESTYLE s, DWORD userstylecount) {
	setLineStyle_userstylecount(s, userstylecount);
}
EasyX_C_API FILLSTYLE __stdcall CreateFS() {
	return createFillStyle();
}
EasyX_C_API FILLSTYLE __stdcall CreateFSFromFS(FILLSTYLE s) {
	return createFillStyle_from_one(s);
}
EasyX_C_API void __stdcall SetFS_Style(FILLSTYLE s, int style) {
	setFillStyle_style(s, style);
}
EasyX_C_API void __stdcall SetFS_hatch(FILLSTYLE s, long hatch) {
	setFillStyle_hatch(s, hatch);
}
EasyX_C_API void __stdcall SetFS_ppattern(FILLSTYLE s, IMAGE *ppattern) {
	setFillStyle_ppattern(s,ppattern);
}
EasyX_C_API IMAGE __stdcall  CreateI() {
	return CreateIMAGE(0,0);
}
EasyX_C_API IMAGE __stdcall  CreateIFromI(IMAGE i) {
	return CreateIMAGE_from_one(i);
}
EasyX_C_API IMAGE __stdcall  CreateIFromWH(int _w,int _h) {
	return CreateIMAGE(_w, _h);
}
EasyX_C_API int __stdcall  GetIW(IMAGE i) {
	return GetIMAGE_width(i);
}
EasyX_C_API int __stdcall  GetIH(IMAGE i) {
	return GetIMAGE_height(i);
}
EasyX_C_API void __stdcall  ResizeI(IMAGE i, int _weight, int _height) {
	ResizeIMAGE(i, _weight, _height);
}


EasyX_C_API void  __stdcall settextstyle1(int nHeight, int nWidth, LPCTSTR lpszFace) {
	settextstyle_cpp(nHeight, nWidth, lpszFace);
}
EasyX_C_API void  __stdcall settextstyle2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	settextstyle_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
EasyX_C_API void  __stdcall settextstyle3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
	settextstyle_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);

}
EasyX_C_API void  __stdcall settextstyle4(const LOGFONT *font) {
	settextstyle_cpp(font);
}	// 设置当前字体样式
EasyX_C_API void __stdcall  gettextstyle(LOGFONT *font) {
	gettextstyle_cpp(font);
}		// 获取当前字体样式

//EasyX_C_API void  __stdcall settextstyle(int nHeight, int nWidth, LPCTSTR lpszFace)
//{
//	settextstyle1(nHeight, nWidth, lpszFace);
//}


													//未写
EasyX_C_API void  __stdcall loadimage1(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight) {
	loadimage_cpp(pDstImg, pImgFile, nWidth, nHeight);
}				// 从图片文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
EasyX_C_API void  __stdcall loadimage2(IMAGE *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth, int nHeight, bool bResize){
	loadimage_cpp((pDstImg),pResType, pResName, nWidth, nHeight, bResize);
}	// 从资源文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
EasyX_C_API void  __stdcall loadimage3(IMAGE *pDstImg, LPCTSTR pImgFile) {
	loadimage_cpp(pDstImg, pImgFile);
}
EasyX_C_API void __stdcall loadimage4(IMAGE *pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight, bool bResize) {
	loadimage_cpp(pDstImg, pImgFile,nWidth,nHeight,bResize);
}
EasyX_C_API void __stdcall saveimage(LPCTSTR pImgFile, IMAGE* pImg) {
	saveimage_cpp(pImgFile, pImg);
}																		// 保存图像(bmp/gif/jpg/png/tif)
EasyX_C_API void __stdcall getimage(IMAGE *pDstImg, int srcX, int srcY, int srcWidth, int srcHeight) {
	getimage_cpp(pDstImg, srcX, srcY, srcWidth, srcHeight);
}										// 从当前绘图设备获取图像
EasyX_C_API void __stdcall putimage1(int dstX, int dstY, const IMAGE *pSrcImg) {
	putimage_cpp(dstX, dstY, pSrcImg);
}												// 绘制图像到屏幕

EasyX_C_API void __stdcall loadimage(IMAGE * pDstImg, LPCTSTR pImgFile, int nWidth, int nHeight)
{
	loadimage1(pDstImg, pImgFile, nWidth, nHeight);
}

EasyX_C_API void __stdcall putimage2(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop) {
	putimage_cpp(dstX, dstY, pSrcImg,dwRop);
}												// 绘制图像到屏幕

EasyX_C_API void __stdcall  putimage3(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE *pSrcImg, int srcX, int srcY, DWORD dwRop) {
	putimage_cpp(dstX, dstY, dstWidth, dstHeight,pSrcImg, srcX, srcY, dwRop);
}		// 绘制图像到屏幕(指定宽高)
EasyX_C_API void __stdcall rotateimage(IMAGE *dstimg, IMAGE *srcimg, double radian, COLORREF bkcolor, bool autosize, bool highquality) {
	rotateimage_cpp((*(IMAGE**)dstimg), (*(IMAGE**)srcimg), radian, bkcolor, autosize, highquality);
}// 旋转图像
EasyX_C_API void __stdcall Resize(IMAGE* pImg, int width, int height) {
	Resize_cpp(pImg, width, height);
}	// 调整绘图设备的大小
EasyX_C_API DWORD* __stdcall  GetImageBuffer(IMAGE* pImg) {
	return GetImageBuffer_cpp(pImg);
}			// 获取绘图设备的显存指针//默认NULL
EasyX_C_API IMAGE* __stdcall  GetWorkingImage() {
	return GetWorkingImage_cpp();
}							// 获取当前绘图设备
EasyX_C_API void  __stdcall SetWorkingImage(IMAGE* pImg) {
	return SetWorkingImage_cpp(pImg);
}			// 设置当前绘图设备//默认NULL
EasyX_C_API HDC  __stdcall GetImageHDC(IMAGE* pImg) {
	return GetImageHDC_cpp(pImg);
}				// 获取绘图设备句柄(HDC)//默认NULL

														//未写
														// 其它函数

EasyX_C_API int	 __stdcall getwidth() {
	return getwidth_cpp();
}			// 获取绘图区宽度
EasyX_C_API int	 __stdcall getheight() {
	return getheight_cpp();
}		// 获取绘图区高度
EasyX_C_API int	 __stdcall getx() {
	return getx_cpp();
}				// 获取当前 x 坐标
EasyX_C_API int	 __stdcall gety() {
	return gety_cpp();
}				// 获取当前 y 坐标

EasyX_C_API void  __stdcall BeginBatchDraw() {
	BeginBatchDraw_cpp();
}	// 开始批量绘制
EasyX_C_API void  __stdcall FlushBatchDraw1() {
	FlushBatchDraw_cpp();
}	// 执行未完成的绘制任务
EasyX_C_API void  __stdcall FlushBatchDraw2(int left, int top, int right, int bottom) {
	FlushBatchDraw_cpp(left, top, right, bottom);
}	// 执行指定区域内未完成的绘制任务
EasyX_C_API void  __stdcall EndBatchDraw1() {
	EndBatchDraw_cpp();
}	// 结束批量绘制，并执行未完成的绘制任务
EasyX_C_API void  __stdcall EndBatchDraw2(int left, int top, int right, int bottom) {
	EndBatchDraw_cpp(left, top, right, bottom);
}	// 结束批量绘制，并执行指定区域内未完成的绘制任务

EasyX_C_API HWND  __stdcall GetHWnd() {
	return GetHWnd_cpp();
}								// 获取绘图窗口句柄(HWND)
EasyX_C_API TCHAR*  __stdcall GetEasyXVer() {
	return GetEasyXVer_cpp();
}						// 获取 EasyX 当前版本

														// 获取用户输入
EasyX_C_API bool  __stdcall InputBox1(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt, LPCTSTR pTitle, LPCTSTR pDefault, int width, int height, bool bOnlyOK) {
	return InputBox_cpp(pString,nMaxCount, pPrompt, pTitle, pDefault, width, height, bOnlyOK);
}
EasyX_C_API bool  __stdcall InputBox2(LPTSTR pString, int nMaxCount) {
	return InputBox_cpp(pString,nMaxCount);
}



EasyX_C_API HWND  __stdcall	initgraph_bgi(int* gdriver, int* gmode, char* path) {
	return initgraph_cpp_with_bgi(gdriver, gmode, path);
}

EasyX_C_API void  __stdcall	bar(int left, int top, int right, int bottom) {
	bar_cpp(left, top, right, bottom);
}		// 画无边框填充矩形
EasyX_C_API void  __stdcall	bar3d(int left, int top, int right, int bottom, int depth, bool topflag) {
	bar3d_cpp(left, top, right, bottom, depth, topflag);
}	// 画有边框三维填充矩形

EasyX_C_API void  __stdcall	drawpoly(int numpoints, const int *polypoints) {
	drawpoly_cpp(numpoints, polypoints);
}	// 画多边形
EasyX_C_API void  __stdcall	fillpoly(int numpoints, const int *polypoints) {
	fillpoly_cpp(numpoints, polypoints);
}	// 画填充的多边形

EasyX_C_API int  __stdcall	getmaxx() {
	return getmaxx_cpp();
}					// 获取最大的宽度值
EasyX_C_API int  __stdcall	getmaxy(){
	return getmaxy_cpp();
}					// 获取最大的高度值

EasyX_C_API COLORREF  __stdcall	getcolor() {
	return getcolor_cpp();

}			// 获取当前绘图前景色
EasyX_C_API void  __stdcall	setcolor(COLORREF color) {
	return setcolor_cpp(color);
}	// 设置当前绘图前景色

EasyX_C_API void  __stdcall	setwritemode(int mode) {
	setwritemode_cpp(mode);
}	// 设置前景的二元光栅操作模式


EasyX_C_API void  __stdcall	setfont1(int nHeight, int nWidth, LPCTSTR lpszFace) {
	return setfont_cpp(nHeight, nWidth, lpszFace);
}
EasyX_C_API void  __stdcall	setfont2(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	setfont_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
EasyX_C_API void  __stdcall	setfont3(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
	return setfont_cpp(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);
}
EasyX_C_API void  __stdcall	setfont4(const LOGFONT *font) {
	setfont_cpp(font);
}	// 设置当前字体样式
EasyX_C_API void  __stdcall	getfont5(LOGFONT *font) {
	setfont_cpp(font);
}

EasyX_C_API void __stdcall setfont(int nHeight, int nWidth, LPCTSTR lpszFace)
{
	return setfont1(nHeight, nWidth, lpszFace);
}

bool inited = 0;
ULONG_PTR gdipid;
EasyX_C_API void __stdcall ainit() {
	GdiplusStartupInput gsi;
	GdiplusStartupOutput goi;
	GdiplusStartup(&gdipid, &gsi, &goi);
	inited = 1;
}
EasyX_C_API void __stdcall auninit() {
	inited = 0;
	GdiplusShutdown(gdipid);
}

EasyX_C_API void __stdcall loadimagea1(IMAGE *pSrcimg, LPCTSTR pImgFile,bool bResize, int rWidth, int rHeight, bool bMove, int mX, int mY) {
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid,&gsi,&goi);
		inited = 1;
	}
	wchar_t * s = (wchar_t*)(_bstr_t)pImgFile;
	Image *i = new Image((WCHAR*)s);
	Graphics g(GetImageHDC_cpp(pSrcimg));
	if (!bResize && !bMove) {
		g.DrawImage(i, 0, 0, i->GetWidth(), i->GetHeight());
	}
	else if(bResize &&!bMove){
		g.DrawImage(i, 0, 0, rWidth, rHeight);
	}
	else if (bResize && bMove) {
		g.DrawImage(i, mX, mY, rWidth, rHeight);
	}
	else if(!bResize && bMove){
		g.DrawImage(i, mX, mY, i->GetWidth(), i->GetHeight());
	}
	g.~Graphics();
	i->~Image();
}

EasyX_C_API void __stdcall loadimagea2(IMAGE *pSrcImg, LPCTSTR pResType, LPCTSTR pResName, bool bResize, int rWidth, int rHeight, bool bMove, int mX, int mY) {
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid, &gsi, &goi);
		inited = 1;
	}
	HINSTANCE hInst = GetModuleHandle(NULL);
	HRSRC hRsrc = ::FindResource(hInst,pResName,pResType); // type

	// load resource into memory
	DWORD len = SizeofResource(hInst, hRsrc);
	BYTE* lpRsrc = (BYTE*)LoadResource(hInst, hRsrc);


	// Allocate global memory on which to create stream
	HGLOBAL m_hMem = GlobalAlloc(GMEM_FIXED, len);
	BYTE* pmem = (BYTE*)GlobalLock(m_hMem);
	memcpy(pmem, lpRsrc, len);
	IStream* pstm;
	CreateStreamOnHGlobal(m_hMem, FALSE, &pstm);

	// load from stream这是关键一句，通过FromStream返回以各Image*，然后在Graphic的DrawImage地方调用就行了！
	Image *i=new Image(pstm);
	Graphics g(GetImageHDC_cpp(pSrcImg));
	if (!bResize && !bMove) {
		g.DrawImage(i, 0, 0, i->GetWidth(), i->GetHeight());
	}
	else if (bResize && !bMove) {
		g.DrawImage(i, 0, 0, rWidth, rHeight);
	}
	else if (bResize && bMove) {
		g.DrawImage(i, mX, mY, rWidth, rHeight);
	}
	else if (!bResize && bMove) {
		g.DrawImage(i, mX, mY, i->GetWidth(), i->GetHeight());
	}
	// free/release stuff
	GlobalUnlock(m_hMem);
	pstm->Release();
	FreeResource(lpRsrc);
	g.~Graphics();
	i->~Image();
}
EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION1(LPCTSTR pImgFile) {
	struct  AIMAGE_INFORMATION info;
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid, &gsi, &goi);
		inited = 1;
	}
	wchar_t * s = (wchar_t*)(_bstr_t)pImgFile;
	Image *i = new Image((WCHAR*)s);
	if (i == NULL) {
		return {0,0};
	}
	info.m_Height = i->GetHeight();
	info.m_Width = i->GetWidth();
	i->~Image();
	return info;
}
EasyX_C_API struct AIMAGE_INFORMATION __stdcall getAIMAGE_INFORMATION2(LPCTSTR pResType, LPCTSTR pResName) {
	struct  AIMAGE_INFORMATION info;
	if (inited == 0) {
		GdiplusStartupInput gsi;
		GdiplusStartupOutput goi;
		GdiplusStartup(&gdipid, &gsi, &goi);
		inited = 1;
	}
	HINSTANCE hInst = GetModuleHandle(NULL);
	HRSRC hRsrc = ::FindResource(hInst, pResName, pResType); // type

															 // load resource into memory
	DWORD len = SizeofResource(hInst, hRsrc);
	BYTE* lpRsrc = (BYTE*)LoadResource(hInst, hRsrc);


	// Allocate global memory on which to create stream
	HGLOBAL m_hMem = GlobalAlloc(GMEM_FIXED, len);
	BYTE* pmem = (BYTE*)GlobalLock(m_hMem);
	memcpy(pmem, lpRsrc, len);
	IStream* pstm;
	CreateStreamOnHGlobal(m_hMem, FALSE, &pstm);

	// load from stream这是关键一句，通过FromStream返回以各Image*，然后在Graphic的DrawImage地方调用就行了！
	Image *i = new Image(pstm);
	if (i == NULL) {
		return{ 0,0 };
	}
	info.m_Height = i->GetHeight();
	info.m_Width = i->GetWidth();
	// free/release stuff
	GlobalUnlock(m_hMem);
	pstm->Release();
	FreeResource(lpRsrc);
	i->~Image();
	return info;
}