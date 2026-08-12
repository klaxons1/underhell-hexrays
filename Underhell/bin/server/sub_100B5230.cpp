double __thiscall sub_100B5230(float *this)
{
  int v2; // eax
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 364))(this)
    || !*((_BYTE *)this + 3695)
    || *((_BYTE *)this + 3692) )
  {
    return 0.0;
  }
  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 364))(this);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v2 + 536))(v2, v4);
  return this[939] * v4[1] + this[938] * v4[0] + this[940] * v4[2];
}
