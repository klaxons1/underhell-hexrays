int __thiscall sub_102673F0(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  _BYTE *v5; // ecx
  int v6; // ecx
  int result; // eax

  if ( a2 )
  {
    *(_DWORD *)(this + 52) = 0;
    v3 = *(_DWORD *)(this + 44);
    *(_DWORD *)(v3 + 1696) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    v4 = *(_DWORD *)(this + 44);
    v5 = (_BYTE *)(v4 + 1124);
    if ( *(_BYTE *)(v4 + 1704) )
      sub_10144FA0(v5, 1);
    else
      sub_10144F50((int)v5);
    v6 = *(_DWORD *)(this + 44);
    *(float *)(this + 384) = 1.0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 76))(v6, a2);
    return sub_100EC4A0(*(int **)(this + 44), *(float *)(dword_106B31C8 + 12), 0);
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(this + 44) + 1696) = -1;
    sub_10145050(*(_DWORD *)(this + 44) + 1124);
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 44) + 76))(*(_DWORD *)(this + 44), 0);
    *(float *)(this + 384) = 0.5;
  }
  return result;
}
