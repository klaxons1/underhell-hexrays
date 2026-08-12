void __thiscall sub_10189470(float *this)
{
  double v2; // st7
  double v3; // st5
  double v4; // st7
  int v5; // esi
  int v6; // eax
  float v7; // [esp+4h] [ebp-4h]

  sub_1015E0D0(this);
  if ( !byte_106B4F38 )
  {
    v2 = *(float *)(dword_106B77A4 + 44) * 60.0;
    v7 = *(float *)(dword_106B2E14 + 44);
    if ( 0.0 == v2 )
    {
      v4 = 0.0;
    }
    else
    {
      v3 = v2;
      v4 = 0.0;
      if ( v3 <= *(float *)(dword_106B31C8 + 12) )
        goto LABEL_15;
    }
    if ( *(float *)(dword_106B2E14 + 44) == v4 )
      return;
    v5 = 1;
    if ( *(int *)(dword_106B31C8 + 20) < 1 )
      return;
    while ( 1 )
    {
      v6 = sub_1025FB50(v5);
      if ( v6 )
      {
        if ( (double)*(int *)(v6 + 3992) >= v7 )
          break;
      }
      if ( ++v5 > *(_DWORD *)(dword_106B31C8 + 20) )
        return;
    }
LABEL_15:
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 540))(this);
    return;
  }
  if ( 0.0 != this[8] && *(float *)(dword_106B31C8 + 12) > (double)this[8] )
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 536))(this);
}
