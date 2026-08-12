void __thiscall sub_10403A70(int this)
{
  _DWORD *v2; // edi
  int v3; // edi
  float v4; // [esp+4h] [ebp-4h] BYREF

  sub_100D3C30((int *)this);
  if ( !*(_BYTE *)(this + 1144) )
  {
    v2 = (_DWORD *)sub_100D1940((_DWORD *)this);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
      {
        v3 = v2[823] & 1;
        if ( v3 || *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 1392) )
        {
          if ( v3 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1132) && *(int *)(this + 1200) <= 0 )
            sub_1027AEC0((void *)this);
        }
        else
        {
          v4 = *(float *)(dword_106B31C8 + 12) - 0.1;
          sub_100D2D00((float *)(this + 1132), &v4);
        }
      }
    }
  }
}
