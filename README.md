# UIButton-GLEnlargeEdge

##作用
 此分类的作用是根据需要对button现有的响应区
 进行扩展

##注意
 * 对button响应区扩展时,最大响应范围不可超过父视图
 * 如果有特殊扩展需要,可重写- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
   此时,响应区不在受限制
