int __thiscall sub_1038B090(float *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int result; // eax

  v2 = sub_1025FB50(1);
  if ( v2 )
  {
    (*(void (__thiscall **)(float *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1808))(
      this,
      v2,
      0.80000001,
      5.0,
      0.0);
    v3 = *((_DWORD *)this + 1091);
    if ( v3 < 3 )
      *((_DWORD *)this + 1091) = v3 + 1;
    if ( *((int *)this + 1091) >= 2 )
    {
      sub_100218B0(this, v2);
      sub_10389C30((int)this, 1);
    }
  }
  this[1079] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4)
             + *(float *)(dword_106B31C8 + 12);
  v4 = (*(int (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2, 1, 1);
  result = sub_100AC410((int)(this + 1290), off_10676814[v4], COERCE_INT(2.0), COERCE_INT(4.0));
  *((_BYTE *)this + 4342) = 1;
  return result;
}
