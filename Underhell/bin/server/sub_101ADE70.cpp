unsigned int __thiscall sub_101ADE70(float *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  int (__thiscall *v5)(float *); // edx

  result = *((_DWORD *)this + 201);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * ((_DWORD)this[201] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      v4 = *v3;
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 424) )
        {
          (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 207) + 28))(*((_DWORD *)this + 207));
          v5 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 196);
          this[205] = *(float *)(dword_106B31C8 + 12) - *(float *)(dword_106B31C8 + 28);
          return v5(this);
        }
      }
    }
  }
  return result;
}
