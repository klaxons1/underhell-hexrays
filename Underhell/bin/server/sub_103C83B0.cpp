int __thiscall sub_103C83B0(float *this, int a2, int a3)
{
  int (__thiscall *v4)(float *); // edx
  int v5; // eax
  int result; // eax

  if ( *(float *)(dword_106B31C8 + 12) < (double)this[1439] )
    return 0;
  v4 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
  this[1439] = *(float *)(dword_106B31C8 + 12) + 1.0;
  if ( !v4(this) )
    return 0;
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) != 4 || sub_103C71A0((int)this, 128.0) <= 3 )
    return 0;
  result = 84;
  this[1439] = *(float *)(dword_106B31C8 + 12) + 15.0;
  return result;
}
