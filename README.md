# ToyLab
### 高级OpenGL
1. #### 模板测试
* 当你开启模板测试时，画场景时其实是同时画了color buffer,depth buffer和stencil buffer
2.  #### 深度测试和混合
*  先绘制所有不透明的物体
* 对所有透明的物体排序。
* 按顺序绘制所有透明的物体。
* 更高级的技术还有次序无关透明度(Order Independent Transparency, OIT)
* **最终颜色**=(目标颜色*目标因子)@(源颜色*源因子)

3. #### 帧缓冲
* 附加至少一个缓冲（颜色、深度或模板缓冲）。
* 至少有一个颜色附件(Attachment)。
    * 附件:  纹理或渲染缓冲对象(Renderbuffer Object)。
    * 纹理： 
* 所有的附件都必须是完整的（保留了内存）。
* 每个缓冲都应该有相同的样本数。
