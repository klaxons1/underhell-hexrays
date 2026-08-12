int __thiscall sub_10125760(int this, int a2)
{
  int result; // eax
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // edx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 260))(a2, 1.0, 0);
    v4 = *(_DWORD *)(this + 412);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v6 )
            v7 = *v5;
          else
            v7 = 0;
          *(_BYTE *)(v7 + 800) = 0;
        }
      }
    }
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    sub_100E0970(this, v8, 0, 0);
    sub_100EAB80((_DWORD *)this, 32);
    *(_DWORD *)(this + 196) = 0;
    sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
