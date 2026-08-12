void __thiscall sub_10047B60(int this)
{
  int *v2; // edi
  double v3; // st7
  float v4; // [esp+Ch] [ebp-4h]

  v2 = (int *)sub_100422D0();
  if ( *(_DWORD *)(this + 2008) != *(_DWORD *)(this + 1996) && !sub_10034D10((_BYTE *)this) )
  {
    if ( v2 && sub_10034ED0((_DWORD *)this) )
      v3 = sub_100423F0(v2);
    else
      v3 = *((float *)off_103DC81C + 3);
    v4 = v3;
    sub_10025680((float *)this, 0.0);
    *(float *)(this + 96) = v4;
  }
}
