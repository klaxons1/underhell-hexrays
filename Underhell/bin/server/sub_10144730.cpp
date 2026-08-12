void __thiscall sub_10144730(int this)
{
  float v2; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 869) )
  {
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 856) )
    {
      sub_10144140(this);
      v2 = *(float *)(dword_106B31C8 + 12) + 0.2;
      sub_100EC4A0((int *)this, v2, (int)"SkyboxLerpContext");
    }
  }
}
