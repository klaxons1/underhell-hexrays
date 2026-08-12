int __thiscall sub_103FA5D0(_DWORD *this)
{
  int result; // eax
  float *v3; // esi
  float v4[3]; // [esp+1Ch] [ebp-14h] BYREF
  int v5; // [esp+28h] [ebp-8h]
  int v6; // [esp+2Ch] [ebp-4h] BYREF

  result = sub_100D1940(this);
  v3 = (float *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -2, 2);
      v4[0] = -6.0;
      v4[1] = (float)v5;
      v4[2] = 0.0;
      sub_100F7A60(v3, v4);
      v6 = 553645557;
      sub_102600B0((int *)v3, &v6, 0.1, 0.0, 1);
      return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, 1, 0.0);
    }
  }
  return result;
}
