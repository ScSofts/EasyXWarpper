#include <graphics.h>
#include "CPP.h"
#define bool int
#pragma warning(disable:4800)
HWND initgraph_cpp(int width,int height,int flag ) {
	return initgraph(width, height, flag);
}
MOUSEMSG *msg;
void closegraph_cpp() {
	return closegraph();
}
void cleardevice_cpp() {
	cleardevice();
}
void clearcliprgn_cpp() {
	clearcliprgn();
}
void getaspectratio_cpp(
	float *pxasp,
	float *pyasp
) {
	getaspectratio(pxasp, pyasp);
}
void graphdefaults_cpp() {
	graphdefaults();
}
void setaspectratio_cpp(
	float xasp,
	float yasp
) {
	setaspectratio(xasp, yasp);
}
void setcliprgn_cpp(HRGN hrgn) {
	setcliprgn(hrgn);
}
// 颜色模型转换函数
COLORREF RGBtoGRAY_cpp(COLORREF rgb) {
	return RGBtoGRAY(rgb);
}
void RGBtoHSL_cpp(COLORREF rgb, float *H, float *S, float *L) {
	RGBtoHSL(rgb, H, S, L);
}
void RGBtoHSV_cpp(COLORREF rgb, float *H, float *S, float *V) {
	RGBtoHSV(rgb, H, S, V);
}
COLORREF HSLtoRGB_cpp(float H, float S, float L) {
	return (HSLtoRGB(H, S, L));
}
COLORREF HSVtoRGB_cpp(float H, float S, float V) {
	return HSVtoRGB(H, S, V);
}


COLORREF getlinecolor_cpp() {
	return getlinecolor();
}// 获取当前线条颜色
void setlinecolor_cpp(COLORREF color) {
	setlinecolor(color);
}	// 设置当前线条颜色
COLORREF gettextcolor_cpp() {
	return gettextcolor();
}			// 获取当前文字颜色
void settextcolor_cpp(COLORREF color) {
	settextcolor(color);
}	// 设置当前文字颜色
COLORREF getfillcolor_cpp() {
	return getfillcolor();
}			// 获取当前填充颜色
void setfillcolor_cpp(COLORREF color) {
	setfillcolor(color);
}	// 设置当前填充颜色
COLORREF getbkcolor_cpp() {
	return getbkcolor();
}				// 获取当前绘图背景色
void setbkcolor_cpp(COLORREF color) {
	setbkcolor(color);
}	// 设置当前绘图背景色
int  getbkmode_cpp() {
	return getbkmode();
}					// 获取背景混合模式
void setbkmode_cpp(int mode) {
	setbkmode(mode);
}			// 设置背景混合模式


int  getrop2_cpp() {
	return getrop2();
}						// 获取前景的二元光栅操作模式
void setrop2_cpp(int mode){
	setrop2(mode);
}			// 设置前景的二元光栅操作模式
int  getpolyfillmode_cpp() {
	return getpolyfillmode();
}				// 获取多边形填充模式
void setpolyfillmode_cpp(int mode) {
	setpolyfillmode(mode);
}		// 设置多边形填充模式


COLORREF getpixel_cpp(int x, int y) {
	return getpixel(x, y);
}				// 获取点的颜色
void putpixel_cpp(int x, int y, COLORREF color) {
	putpixel(x, y, color);
}	// 画点

void moveto_cpp(int x, int y) {
	moveto(x, y);
}						// 移动当前点(绝对坐标)
void moverel_cpp(int dx, int dy) {
	moverel(dx, dy);
}					// 移动当前点(相对坐标)

void line_cpp(int x1, int y1, int x2, int y2) {
	line(x1, y1, x2, y2);
}		// 画线
void linerel_cpp(int dx, int dy) {
	linerel(dx, dy);
}					// 画线(至相对坐标)
void lineto_cpp(int x, int y) {
	lineto(x, y);
}						// 画线(至绝对坐标)

void rectangle_cpp(int left, int top, int right, int bottom) {
	rectangle(left, top, right, bottom);
}	// 画矩形
void fillrectangle_cpp(int left, int top, int right, int bottom) {
	fillrectangle(left, top, right, bottom);
}	// 画填充矩形(有边框)
void solidrectangle_cpp(int left, int top, int right, int bottom) {
	solidrectangle(left, top, right, bottom);
}	// 画填充矩形(无边框)
void clearrectangle_cpp(int left, int top, int right, int bottom) {
	clearrectangle(left, top, right, bottom);
}	// 清空矩形区域

void circle_cpp(int x, int y, int radius) {
	circle(x, y, radius);
}		// 画圆
void fillcircle_cpp(int x, int y, int radius) {
	fillcircle(x, y, radius);
}		// 画填充圆(有边框)
void solidcircle_cpp(int x, int y, int radius) {
	solidcircle(x, y, radius);
}		// 画填充圆(无边框)
void clearcircle_cpp(int x, int y, int radius) {
	clearcircle(x, y, radius);
}		// 清空圆形区域

void ellipse_cpp(int left, int top, int right, int bottom) {
	ellipse(left, top, right, bottom);
}	// 画椭圆
void fillellipse_cpp(int left, int top, int right, int bottom) {
	fillellipse(left, top, right, bottom);
}	// 画填充椭圆(有边框)
void solidellipse_cpp(int left, int top, int right, int bottom) {
	solidellipse(left, top, right, bottom);
}	// 画填充椭圆(无边框)
void clearellipse_cpp(int left, int top, int right, int bottom) {
	clearellipse(left, top, right, bottom);
}	// 清空椭圆形区域

void roundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	roundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 画圆角矩形
void fillroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	fillroundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 画填充圆角矩形(有边框)
void solidroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	solidroundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}		// 画填充圆角矩形(无边框)
void clearroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight) {
	clearroundrect(left, top, right, bottom, ellipsewidth, ellipseheight);
}	// 清空圆角矩形区域

void arc_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	arc(left, top, right, bottom, stangle, endangle);
}	// 画椭圆弧(起始角度和终止角度为弧度制)
void pie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	pie(left, top, right, bottom, stangle, endangle);
}	// 画椭圆扇形(起始角度和终止角度为弧度制)
void fillpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	fillpie(left, top, right, bottom, stangle, endangle);
}	// 画填充椭圆扇形(有边框)
void solidpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	solidpie(left, top, right, bottom, stangle, endangle);
}	// 画填充椭圆扇形(无边框)
void clearpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle) {
	clearpie(left, top, right, bottom, stangle, endangle);
}	// 清空椭圆扇形区域

void polyline_cpp(const POINT *points, int num) {
	polyline(points, num);
}								// 画多条连续的线
void polygon_cpp(const POINT *points, int num) {
	polygon(points, num);
}								// 画多边形
void fillpolygon_cpp(const POINT *points, int num) {
	fillpolygon(points, num);
}								// 画填充的多边形(有边框)
void solidpolygon_cpp(const POINT *points, int num) {
	solidpolygon(points, num);
}								// 画填充的多边形(无边框)
void clearpolygon_cpp(const POINT *points, int num) {
	clearpolygon(points, num);
}								// 清空多边形区域

void polybezier_cpp(const POINT *points, int num) {
	polybezier(points, num);
}									// 画贝塞尔曲线
void floodfill_cpp(int x, int y, COLORREF color, int filltype) {
	floodfill(x, y, color, filltype);
}	// 填充区域


void outtext_cpp(LPCTSTR str) {
	outtext(str);
}					// 在当前位置输出字符串
void outtext_cpp(TCHAR c) {
	outtext(c);
}						// 在当前位置输出字符
void outtextxy_cpp(int x, int y, LPCTSTR str) {
	outtextxy(x, y, str);
}	// 在指定位置输出字符串
void outtextxy_cpp(int x, int y, TCHAR c) {
	outtextxy(x, y, c);
}// 在指定位置输出字符
int textwidth_cpp(LPCTSTR str) {
	return textwidth(str);
}					// 获取字符串占用的像素宽
int textwidth_cpp(TCHAR c) {
	return textwidth(c);
}						// 获取字符占用的像素宽
int textheight_cpp(LPCTSTR str){
	return textheight(str);
}				// 获取字符串占用的像素高
int textheight_cpp(TCHAR c) {
	return textheight(c);
}					// 获取字符占用的像素高
int drawtext_cpp(LPCTSTR str, RECT* pRect, UINT uFormat) {
	return drawtext(str, pRect, uFormat);
}
	// 在指定区域内以指定格式输出字符串
int drawtext_cpp(TCHAR c, RECT* pRect, UINT uFormat) {
	return drawtext(c, pRect, uFormat);
}		// 在指定区域内以指定格式输出字符

void getlinestyle_cpp(LINESTYLE_cpp *pstyle) {
	LINESTYLE *style = (LINESTYLE*)pstyle;
	getlinestyle(style);
}						// 获取当前画线样式
void setlinestyle_cpp(const LINESTYLE_cpp* pstyle) {
	setlinestyle((LINESTYLE*)pstyle);
}					// 设置当前画线样式
void setlinestyle_cpp(int style, int thickness, const DWORD *puserstyle, DWORD userstylecount) {
	setlinestyle(style, thickness, puserstyle, userstylecount);
}	// 设置当前画线样式
void getfillstyle_cpp(FILLSTYLE_cpp* pstyle) {
	getfillstyle((FILLSTYLE*)pstyle);
}						// 获取当前填充样式
void setfillstyle_cpp(const FILLSTYLE_cpp* pstyle) {
	setfillstyle((FILLSTYLE*)pstyle);
}					// 设置当前填充样式
void setfillstyle_cpp(int style, long hatch, IMAGE_cpp* ppattern){
	setfillstyle(style, hatch, (IMAGE*)ppattern);
}		// 设置当前填充样式
void setfillstyle_cpp(BYTE* ppattern8x8) {
	setfillstyle(ppattern8x8);
}						// 设置当前填充样式

int MouseHit_cpp(void) {
	return MouseHit();
}			// 检查是否存在鼠标消息
void GetMouseMsg_cpp(void) {
	msg = &(GetMouseMsg());
}		// 获取一个鼠标消息。如果没有，就等待
UINT GetMouseMsg_cpp_getuMsg(void) {
	return msg->uMsg;
}
bool Get_MouseMsg_cpp_getmkCtrl(void) {
	return msg->mkCtrl;
}
bool Get_MouseMsg_cpp_getmkShift(void) {
	return msg->mkShift;
}
bool Get_MouseMsg_cpp_getmkLButton(void) {
	return msg->mkLButton;
}
bool Get_MouseMsg_cpp_getmkMButton(void) {
	return msg->mkMButton;
}
bool Get_MouseMsg_cpp_getmkRButton(void) {
	return msg->mkRButton;
}
short Get_MouseMsg_cpp_getx(void) {
	return msg->x;
}
short  Get_MouseMsg_cpp_gety(void) {
	return msg->y;
}

void FlushMouseMsgBuffer_cpp(void) {
	return FlushMouseMsgBuffer();
}	// 清空鼠标消息缓冲区

LINESTYLE_cpp createLineStyle() {
	return (void*)(new LINESTYLE());
}
LINESTYLE_cpp createLineStyle_from_one(LINESTYLE_cpp s) {
	return (void*)(new LINESTYLE(*(LINESTYLE*)s));
}
void setLineStyle_style(LINESTYLE_cpp s, DWORD	style) {
	(*(LINESTYLE*)s).style = style;
}
void setLineStyle_thickness(LINESTYLE_cpp s, DWORD	thickness) {
	(*(LINESTYLE*)s).thickness = thickness;
}
void setLineStyle_puserstyle(LINESTYLE_cpp s, DWORD *puserstyle) {
	(*(LINESTYLE*)s).puserstyle = puserstyle;
}
void setLineStyle_userstylecount(LINESTYLE_cpp s, DWORD userstylecount) {
	(*(LINESTYLE*)s).userstylecount = userstylecount;
}
FILLSTYLE_cpp createFillStyle() {
	return (void*)(new FILLSTYLE());
}
FILLSTYLE_cpp createFillStyle_from_one(FILLSTYLE_cpp s) {
	return (void*)(new FILLSTYLE(*(FILLSTYLE*)s));
}
void setFillStyle_style(FILLSTYLE_cpp s, int style) {
	(*(FILLSTYLE*)s).style = style;
}
void setFillStyle_hatch(FILLSTYLE_cpp s, long hatch) {
	(*(FILLSTYLE*)s).hatch = hatch;
}
void setFillStyle_ppattern(FILLSTYLE_cpp s, IMAGE_cpp *ppattern) {
	(*(FILLSTYLE*)s).ppattern = ((IMAGE*)ppattern);
}
IMAGE_cpp CreateIMAGE(int _w,int _h) {
	return (void*)(new IMAGE(_w,_h));
}
IMAGE_cpp CreateIMAGE_from_one(IMAGE_cpp i) {
	return (void*)(new IMAGE(*(IMAGE*)i));
}
int GetIMAGE_width(IMAGE_cpp i) {
	return ((IMAGE*)i)->getwidth();
}
int GetIMAGE_height(IMAGE_cpp i) {
	return ((IMAGE*)i)->getheight();
}
void ResizeIMAGE(IMAGE_cpp i, int _w, int _h) {
	return ((IMAGE*)i)->Resize(_w, _h);
}




void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace) {
	return settextstyle(nHeight, nWidth, lpszFace);
}
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	return settextstyle(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily) {
	return settextstyle(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut, fbCharSet, fbOutPrecision, fbClipPrecision, fbQuality, fbPitchAndFamily);
}
void settextstyle_cpp(const LOGFONT *font) {
	return settextstyle(font);
}	// 设置当前字体样式
void gettextstyle_cpp(LOGFONT *font) {
	return settextstyle(font);
}		// 获取当前字体样式



void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pImgFile, int nWidth , int nHeight, bool bResize) {
	return loadimage(*(IMAGE**)pDstImg,pImgFile,nWidth , nHeight, (bool)bResize);
}					// 从图片文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth, int nHeight, bool bResize) {
	return loadimage((*(IMAGE**)pDstImg), pResName, nWidth, nHeight, bResize);
}	// 从资源文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
void saveimage_cpp(LPCTSTR pImgFile, IMAGE_cpp* pImg) {
	return saveimage(pImgFile,*(IMAGE**)pImg);
}																		// 保存图像(bmp/gif/jpg/png/tif)
void getimage_cpp(IMAGE_cpp * pDstImg, int srcX, int srcY, int srcWidth, int srcHeight)
{
	return getimage(*(IMAGE**)pDstImg, srcX, srcY, srcWidth, srcHeight);
}
// 从当前绘图设备获取图像
void putimage_cpp(int dstX, int dstY, const IMAGE_cpp *pSrcImg, DWORD dwRop) {
	return putimage(dstX, dstY, *(IMAGE**)pSrcImg, dwRop);
}												// 绘制图像到屏幕
void putimage_cpp(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE_cpp *pSrcImg, int srcX, int srcY, DWORD dwRop) {
	return putimage(dstX, dstY, dstWidth, dstHeight, *(IMAGE**)pSrcImg, srcX, srcY, dwRop);
}		// 绘制图像到屏幕(指定宽高)
void rotateimage_cpp(IMAGE_cpp *dstimg, IMAGE_cpp *srcimg, double radian, COLORREF bkcolor, bool autosize, bool highquality) {
	return rotateimage((*(IMAGE**)dstimg), (*(IMAGE**)srcimg), radian, bkcolor, autosize, highquality);
}
// 旋转图像
void Resize_cpp(IMAGE_cpp* pImg, int width, int height) {
	return Resize((*(IMAGE**)pImg), width, height);
}	// 调整绘图设备的大小
DWORD* GetImageBuffer_cpp(IMAGE_cpp* pImg) {
	return GetImageBuffer((*(IMAGE**)pImg));
}			// 获取绘图设备的显存指针
IMAGE_cpp* GetWorkingImage_cpp() {
	return (void**)GetWorkingImage();
}							// 获取当前绘图设备
void SetWorkingImage_cpp(IMAGE_cpp* pImg) {
	return SetWorkingImage(*(IMAGE**)pImg);
}			// 设置当前绘图设备
HDC GetImageHDC_cpp(IMAGE_cpp* pImg) {
	return GetImageHDC(*(IMAGE**)pImg);
}				// 获取绘图设备句柄(HDC)

														//未写
														// 其它函数

int	getwidth_cpp() {
	return getwidth();
}			// 获取绘图区宽度
int	getheight_cpp() {
	return getheight();
}		// 获取绘图区高度
int	getx_cpp() {
	return getx();
}				// 获取当前 x 坐标
int	gety_cpp() {
	return gety();
}				// 获取当前 y 坐标

void BeginBatchDraw_cpp() {
	return BeginBatchDraw();
}	// 开始批量绘制
void FlushBatchDraw_cpp() {
	return FlushBatchDraw();
}	// 执行未完成的绘制任务
void FlushBatchDraw_cpp(int left, int top, int right, int bottom) {
	return FlushBatchDraw(left, top, right, bottom);
}	// 执行指定区域内未完成的绘制任务
void EndBatchDraw_cpp() {
	return EndBatchDraw();
}	// 结束批量绘制，并执行未完成的绘制任务
void EndBatchDraw_cpp(int left, int top, int right, int bottom) {
	return EndBatchDraw(left, top, right, bottom);
}	// 结束批量绘制，并执行指定区域内未完成的绘制任务

HWND GetHWnd_cpp() {
	return GetHWnd();
}								// 获取绘图窗口句柄(HWND)
TCHAR* GetEasyXVer_cpp() {
	return GetEasyXVer();
}						// 获取 EasyX 当前版本

												// 获取用户输入
bool InputBox_cpp(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt, LPCTSTR pTitle, LPCTSTR pDefault, int width, int height, bool bOnlyOK) {
	return InputBox(pString, nMaxCount, pPrompt, pTitle, pDefault, width, height, bOnlyOK);
}


void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace) {
	return setfont(nHeight, nWidth, lpszFace);
}
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut) {
	return setfont(nHeight, nWidth, lpszFace, nEscapement, nOrientation, nWeight, bItalic, bUnderline, bStrikeOut);
}
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily)
{
	return setfont( nHeight,  nWidth, lpszFace,  nEscapement,  nOrientation,  nWeight,  bItalic, bUnderline,  bStrikeOut, fbCharSet, fbOutPrecision,  fbClipPrecision, fbQuality, fbPitchAndFamily);
}
void setfont_cpp(const LOGFONT *font) {
	return setfont(font);
}	// 设置当前字体样式
void getfont_cpp(LOGFONT *font) {
	return getfont(font);
}			// 获取当前字体样式

HWND initgraph_cpp_with_bgi(int* gdriver, int* gmode, char* path) {
	return initgraph(gdriver, gmode, path);
}

void bar_cpp(int left, int top, int right, int bottom) {
	return bar(left, top, right, bottom);
}		// 画无边框填充矩形
void bar3d_cpp(int left, int top, int right, int bottom, int depth, bool topflag) {
	return bar3d(left, top, right, bottom, depth, topflag);
}	// 画有边框三维填充矩形

void drawpoly_cpp(int numpoints, const int *polypoints) {
	return drawpoly(numpoints, polypoints);
}	// 画多边形
void fillpoly_cpp(int numpoints, const int *polypoints) {
	return fillpoly(numpoints, polypoints);
}	// 画填充的多边形

int getmaxx_cpp()
{
	return getmaxx();
}					// 获取最大的宽度值
int getmaxy_cpp() {
	return getmaxy();
}					// 获取最大的高度值

COLORREF getcolor_cpp() {
	return getcolor();
}			// 获取当前绘图前景色
void setcolor_cpp(COLORREF color) {
	return setcolor(color);
}	// 设置当前绘图前景色

void setwritemode_cpp(int mode) {
	return setwritemode(mode);
}
// 设置前景的二元光栅操作模式

