
Pod::Spec.new do |s|
  s.name             = 'BaseViewClass'
  s.version          = '1.0.1'
  s.summary          = 'BaseViewClass'
  s.description      = <<-DESC
  BaseViewContoller:普通控制器
  BaseNavigationControll:导航控制器
  BaseTabBarViewController: 底部 TabBar 控制器
  BaseNavigationBar: 导航条
  ControllerPopByInteractivePopGestureRecognizer: 滑动返回监听
                       DESC
  s.homepage         = 'https://github.com/huawtswork/BaseViewClass'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huawt' => 'ghost263sky@163.com' }
  s.source           = { :git => 'https://github.com/huawtswork/BaseViewClass.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.source_files = 'BaseViewClass/Classes/**/*'
  s.resource = 'BaseViewClass/BaseImage.bundle'
  s.public_header_files = 'BaseViewClass/Classes/**/*.h'
  s.frameworks = 'UIKit', 'Foundation', 'CoreGraphics'
end
