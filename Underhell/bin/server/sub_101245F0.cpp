int sub_101245F0()
{
  int result; // eax

  sub_1023B8B0("Underwater.BulletImpact");
  sub_1023B8B0("FX_RicochetSound.Ricochet");
  sub_1023B8B0("Physics.WaterSplash");
  sub_1023B8B0("BaseExplosionEffect.Sound");
  sub_1023B8B0("Splash.SplashSound");
  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return sub_1023B8B0("HudChat.Message");
  return result;
}
