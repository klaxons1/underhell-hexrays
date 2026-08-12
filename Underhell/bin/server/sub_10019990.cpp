char __thiscall sub_10019990(int *this, int a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  char result; // al
  _BYTE v7[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *, int, int, _DWORD))(*this + 548))(this, v3, 16449, 0)
      || !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) )
    {
      v4 = *this;
      v5 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 504))(v3, v7);
      if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v4 + 2296))(this, v5) )
      {
        *(_DWORD *)a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
        *(float *)(a2 + 20) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.69999999,
                                1.0);
        result = 1;
        *(float *)(a2 + 24) = 0.0;
        return result;
      }
    }
    *(float *)(a2 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                            dword_106B31E4,
                            0.5,
                            0.80000001);
    *(float *)(a2 + 24) = 0.2;
  }
  return 0;
}
