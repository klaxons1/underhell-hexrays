void __thiscall sub_1004C460(_DWORD *this, float *a2)
{
  if ( a2 )
  {
    this[5] = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2);
    a2[215] = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    this[5] = -1;
    MEMORY[0x35C] = *(float *)(dword_106B31C8 + 12);
  }
}
