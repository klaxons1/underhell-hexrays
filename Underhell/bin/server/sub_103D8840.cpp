bool __thiscall sub_103D8840(void *this)
{
  int v2; // eax
  int v3; // eax
  float *v4; // eax
  bool result; // al
  float v6; // [esp+4h] [ebp-14h]
  _BYTE v7[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  result = 1;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    v4 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 536))(v3, v7);
    v6 = v4[1] * v4[1] + *v4 * *v4 + v4[2] * v4[2];
    if ( off_10689708(v6) < 125.0 )
      return 0;
  }
  return result;
}
