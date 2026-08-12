double __thiscall sub_100B52A0(float *this)
{
  int v2; // eax
  float *v3; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 364))(this)
    || !*((_BYTE *)this + 3695)
    || *((_BYTE *)this + 3692) )
  {
    return 0.0;
  }
  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 364))(this);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v2 + 536))(v2, v5);
  v3 = sub_100B51D0(this);
  return v3[1] * v5[1] + *v3 * v5[0] + v3[2] * v5[2];
}
