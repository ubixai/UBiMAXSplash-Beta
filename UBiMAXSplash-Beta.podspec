

Pod::Spec.new do |s|
  s.name             = 'UBiMAXSplash-Beta'
  s.version          = '1.0.0'
  s.summary          = 'UBiX聚合SassSDK 开屏'
  s.homepage         = 'https://www.ubixai.com/product/md'
  # s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhugq' => 'guoqiang.zhu@ubixai.com' }
  s.source           = { :git => 'https://github.com/ubixai/UBiMAXSplash-Beta.git', :tag => s.version.to_s }
  s.ios.deployment_target = '10.0'

  s.static_framework = true
  s.vendored_frameworks = 'UBiMAXSplash.framework'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
    'OTHER_LINK_FLAG' => '$(inherited) -ObjC' }
   s.dependency 'UBiMAXAdSDK-Beta'
  
end
