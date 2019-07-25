#pragma once
//#include <easyx.h>
#include <Windows.h>

// 定义线的样式
typedef void* LINESTYLE_cpp;

typedef void* FILLSTYLE_cpp;

// 定义图像对象
typedef void* IMAGE_cpp;
//定义鼠标对象
typedef void* MOUSEMSG_cpp;

HWND initgraph_cpp(int width, int height, int flag = NULL);
void closegraph_cpp();
void cleardevice_cpp();
void clearcliprgn_cpp();
void getaspectratio_cpp(
	float *pxasp,
	float *pyasp
);
void graphdefaults_cpp();
void setaspectratio_cpp(
	float xasp,
	float yasp
);
void setcliprgn_cpp(HRGN hrgn);
// 颜色模型转换函数
COLORREF RGBtoGRAY_cpp(COLORREF rgb);
void RGBtoHSL_cpp(COLORREF rgb, float *H, float *S, float *L);
void RGBtoHSV_cpp(COLORREF rgb, float *H, float *S, float *V);
COLORREF HSLtoRGB_cpp(float H, float S, float L);
COLORREF HSVtoRGB_cpp(float H, float S, float V);

COLORREF getlinecolor_cpp();			// 获取当前线条颜色
void setlinecolor_cpp(COLORREF color);	// 设置当前线条颜色
COLORREF gettextcolor_cpp();			// 获取当前文字颜色
void settextcolor_cpp(COLORREF color);	// 设置当前文字颜色
COLORREF getfillcolor_cpp();			// 获取当前填充颜色
void setfillcolor_cpp(COLORREF color);	// 设置当前填充颜色
COLORREF getbkcolor_cpp();				// 获取当前绘图背景色
void setbkcolor_cpp(COLORREF color);	// 设置当前绘图背景色
int  getbkmode_cpp();					// 获取背景混合模式
void setbkmode_cpp(int mode);			// 设置背景混合模式

int  getrop2_cpp();						// 获取前景的二元光栅操作模式
void setrop2_cpp(int mode);				// 设置前景的二元光栅操作模式
int  getpolyfillmode_cpp();				// 获取多边形填充模式
void setpolyfillmode_cpp(int mode);		// 设置多边形填充模式

// 绘图函数

COLORREF getpixel_cpp(int x, int y);				// 获取点的颜色
void putpixel_cpp(int x, int y, COLORREF color);	// 画点

void moveto_cpp(int x, int y);						// 移动当前点(绝对坐标)
void moverel_cpp(int dx, int dy);					// 移动当前点(相对坐标)

void line_cpp(int x1, int y1, int x2, int y2);		// 画线
void linerel_cpp(int dx, int dy);					// 画线(至相对坐标)
void lineto_cpp(int x, int y);						// 画线(至绝对坐标)

void rectangle_cpp(int left, int top, int right, int bottom);	// 画矩形
void fillrectangle_cpp(int left, int top, int right, int bottom);	// 画填充矩形(有边框)
void solidrectangle_cpp(int left, int top, int right, int bottom);	// 画填充矩形(无边框)
void clearrectangle_cpp(int left, int top, int right, int bottom);	// 清空矩形区域

void circle_cpp(int x, int y, int radius);		// 画圆
void fillcircle_cpp(int x, int y, int radius);		// 画填充圆(有边框)
void solidcircle_cpp(int x, int y, int radius);		// 画填充圆(无边框)
void clearcircle_cpp(int x, int y, int radius);		// 清空圆形区域

void ellipse_cpp(int left, int top, int right, int bottom);	// 画椭圆
void fillellipse_cpp(int left, int top, int right, int bottom);	// 画填充椭圆(有边框)
void solidellipse_cpp(int left, int top, int right, int bottom);	// 画填充椭圆(无边框)
void clearellipse_cpp(int left, int top, int right, int bottom);	// 清空椭圆形区域

void roundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 画圆角矩形
void fillroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 画填充圆角矩形(有边框)
void solidroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 画填充圆角矩形(无边框)
void clearroundrect_cpp(int left, int top, int right, int bottom, int ellipsewidth, int ellipseheight);		// 清空圆角矩形区域

void arc_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// 画椭圆弧(起始角度和终止角度为弧度制)
void pie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// 画椭圆扇形(起始角度和终止角度为弧度制)
void fillpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// 画填充椭圆扇形(有边框)
void solidpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// 画填充椭圆扇形(无边框)
void clearpie_cpp(int left, int top, int right, int bottom, double stangle, double endangle);	// 清空椭圆扇形区域

void polyline_cpp(const POINT *points, int num);								// 画多条连续的线
void polygon_cpp(const POINT *points, int num);								// 画多边形
void fillpolygon_cpp(const POINT *points, int num);								// 画填充的多边形(有边框)
void solidpolygon_cpp(const POINT *points, int num);								// 画填充的多边形(无边框)
void clearpolygon_cpp(const POINT *points, int num);								// 清空多边形区域

void polybezier_cpp(const POINT *points, int num);									// 画贝塞尔曲线
void floodfill_cpp(int x, int y, COLORREF color, int filltype = FLOODFILLBORDER);	// 填充区域


																					// 文字相关函数

void outtext_cpp(LPCTSTR str);					// 在当前位置输出字符串
void outtext_cpp(TCHAR c);						// 在当前位置输出字符
void outtextxy_cpp(int x, int y, LPCTSTR str);	// 在指定位置输出字符串
void outtextxy_cpp(int x, int y, TCHAR c);		// 在指定位置输出字符
int textwidth_cpp(LPCTSTR str);					// 获取字符串占用的像素宽
int textwidth_cpp(TCHAR c);						// 获取字符占用的像素宽
int textheight_cpp(LPCTSTR str);				// 获取字符串占用的像素高
int textheight_cpp(TCHAR c);					// 获取字符占用的像素高
int drawtext_cpp(LPCTSTR str, RECT* pRect, UINT uFormat);	// 在指定区域内以指定格式输出字符串
int drawtext_cpp(TCHAR c, RECT* pRect, UINT uFormat);		// 在指定区域内以指定格式输出字符

void getlinestyle_cpp(LINESTYLE_cpp* pstyle);						// 获取当前画线样式
void setlinestyle_cpp(const LINESTYLE_cpp* pstyle);					// 设置当前画线样式
void setlinestyle_cpp(int style, int thickness = 1, const DWORD *puserstyle = NULL, DWORD userstylecount = 0);	// 设置当前画线样式
void getfillstyle_cpp(FILLSTYLE_cpp* pstyle);						// 获取当前填充样式
void setfillstyle_cpp(const FILLSTYLE_cpp* pstyle);					// 设置当前填充样式
void setfillstyle_cpp(int style, long hatch = NULL, IMAGE_cpp* ppattern = NULL);		// 设置当前填充样式
void setfillstyle_cpp(BYTE* ppattern8x8);						// 设置当前填充样式
#define bool int
extern int MouseHit_cpp(void);			// 检查是否存在鼠标消息
extern void __cdecl GetMouseMsg_cpp(void);		// 获取一个鼠标消息。如果没有，就等待
void FlushMouseMsgBuffer_cpp(void);	// 清空鼠标消息缓冲区
extern UINT __cdecl GetMouseMsg_cpp_getuMsg(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkCtrl(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkShift(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkLButton(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkMButton(void);
extern bool __cdecl Get_MouseMsg_cpp_getmkRButton(void);
extern short __cdecl Get_MouseMsg_cpp_getx(void);
extern short __cdecl Get_MouseMsg_cpp_gety(void);


LINESTYLE_cpp createLineStyle();
LINESTYLE_cpp createLineStyle_from_one(LINESTYLE_cpp s);
void setLineStyle_style(LINESTYLE_cpp s, DWORD	style);
void setLineStyle_thickness(LINESTYLE_cpp s, DWORD	thickness);
void setLineStyle_puserstyle(LINESTYLE_cpp s, DWORD *puserstyle);
void setLineStyle_userstylecount(LINESTYLE_cpp s, DWORD userstylecount);
FILLSTYLE_cpp createFillStyle();
FILLSTYLE_cpp createFillStyle_from_one(FILLSTYLE_cpp s);
void setFillStyle_style(FILLSTYLE_cpp s, int style);
void setFillStyle_hatch(FILLSTYLE_cpp s, long hatch);
void setFillStyle_ppattern(FILLSTYLE_cpp s, IMAGE_cpp *ppattern);

IMAGE_cpp CreateIMAGE(int _w, int _h);
IMAGE_cpp CreateIMAGE_from_one(IMAGE_cpp i);
int GetIMAGE_width(IMAGE_cpp i);
int GetIMAGE_height(IMAGE_cpp i);
void ResizeIMAGE(IMAGE_cpp i, int _w, int _h);

void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace);
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
void settextstyle_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
void settextstyle_cpp(const LOGFONT *font);	// 设置当前字体样式
void gettextstyle_cpp(LOGFONT *font);		// 获取当前字体样式


//未写
void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pImgFile, int nWidth = 0, int nHeight = 0, bool bResize = false);					// 从图片文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
void loadimage_cpp(IMAGE_cpp *pDstImg, LPCTSTR pResType, LPCTSTR pResName, int nWidth = 0, int nHeight = 0, bool bResize = false);	// 从资源文件获取图像(bmp/gif/jpg/png/tif/emf/wmf/ico)
void saveimage_cpp(LPCTSTR pImgFile, IMAGE_cpp* pImg = NULL);																		// 保存图像(bmp/gif/jpg/png/tif)
void getimage_cpp(IMAGE_cpp *pDstImg, int srcX, int srcY, int srcWidth, int srcHeight);												// 从当前绘图设备获取图像
void putimage_cpp(int dstX, int dstY, const IMAGE_cpp *pSrcImg, DWORD dwRop = SRCCOPY);												// 绘制图像到屏幕
void putimage_cpp(int dstX, int dstY, int dstWidth, int dstHeight, const IMAGE_cpp *pSrcImg, int srcX, int srcY, DWORD dwRop = SRCCOPY);		// 绘制图像到屏幕(指定宽高)
void rotateimage_cpp(IMAGE_cpp *dstimg, IMAGE_cpp *srcimg, double radian, COLORREF bkcolor = BLACK, bool autosize = false, bool highquality = true);// 旋转图像
void Resize_cpp(IMAGE_cpp* pImg, int width, int height);	// 调整绘图设备的大小
DWORD* GetImageBuffer_cpp(IMAGE_cpp* pImg = NULL);			// 获取绘图设备的显存指针
IMAGE_cpp* GetWorkingImage_cpp();							// 获取当前绘图设备
void SetWorkingImage_cpp(IMAGE_cpp* pImg = NULL);			// 设置当前绘图设备
HDC GetImageHDC_cpp(IMAGE_cpp* pImg = NULL);				// 获取绘图设备句柄(HDC)

													//未写
													// 其它函数

int	getwidth_cpp();			// 获取绘图区宽度
int	getheight_cpp();		// 获取绘图区高度
int	getx_cpp();				// 获取当前 x 坐标
int	gety_cpp();				// 获取当前 y 坐标

void BeginBatchDraw_cpp();	// 开始批量绘制
void FlushBatchDraw_cpp();	// 执行未完成的绘制任务
void FlushBatchDraw_cpp(int left, int top, int right, int bottom);	// 执行指定区域内未完成的绘制任务
void EndBatchDraw_cpp();	// 结束批量绘制，并执行未完成的绘制任务
void EndBatchDraw_cpp(int left, int top, int right, int bottom);	// 结束批量绘制，并执行指定区域内未完成的绘制任务

HWND GetHWnd_cpp();								// 获取绘图窗口句柄(HWND)
TCHAR* GetEasyXVer_cpp();						// 获取 EasyX 当前版本

											// 获取用户输入
bool InputBox_cpp(LPTSTR pString, int nMaxCount, LPCTSTR pPrompt = NULL, LPCTSTR pTitle = NULL, LPCTSTR pDefault = NULL, int width = 0, int height = 0, bool bOnlyOK = true);


void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace);
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut);
void setfont_cpp(int nHeight, int nWidth, LPCTSTR lpszFace, int nEscapement, int nOrientation, int nWeight, bool bItalic, bool bUnderline, bool bStrikeOut, BYTE fbCharSet, BYTE fbOutPrecision, BYTE fbClipPrecision, BYTE fbQuality, BYTE fbPitchAndFamily);
void setfont_cpp(const LOGFONT *font);	// 设置当前字体样式
void getfont_cpp(LOGFONT *font);
// 获取当前字体样式
HWND initgraph_cpp_with_bgi(int* gdriver, int* gmode, char* path);

void bar_cpp(int left, int top, int right, int bottom);		// 画无边框填充矩形
void bar3d_cpp(int left, int top, int right, int bottom, int depth, bool topflag);	// 画有边框三维填充矩形

void drawpoly_cpp(int numpoints, const int *polypoints);	// 画多边形
void fillpoly_cpp(int numpoints, const int *polypoints);	// 画填充的多边形

int getmaxx_cpp();					// 获取最大的宽度值
int getmaxy_cpp();					// 获取最大的高度值

COLORREF getcolor_cpp();			// 获取当前绘图前景色
void setcolor_cpp(COLORREF color);	// 设置当前绘图前景色

void setwritemode_cpp(int mode);	// 设置前景的二元光栅操作模式

