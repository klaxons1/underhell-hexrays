int __thiscall sub_10278280(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  __int64 v5; // rax
  int v6; // ebx
  int v7; // edi
  int v8; // ecx
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v2 = -1 - (*(int (__thiscall **)(int))(*(_DWORD *)this + 812))(this);
  v3 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  v4 = *(_DWORD *)(this + 224);
  v5 = (unsigned int)(v2 + v3);
  v6 = 0;
  v10 = v5;
  v11 = v4;
  if ( v4 > 0 )
  {
    v7 = 0;
    do
    {
      *(_DWORD *)(v7 + *(_DWORD *)(this + 212) + 8) = HIDWORD(v5) + 1;
      v8 = *(_DWORD *)(v7 + *(_DWORD *)(this + 212) + 4);
      if ( v6 == v4 - 1 )
        v8 = v10 - HIDWORD(v5) - 2;
      LODWORD(v5) = v8 + HIDWORD(v5) - 2;
      *(_DWORD *)(v7 + *(_DWORD *)(this + 212) + 12) = v5;
      v4 = v11;
      ++v6;
      HIDWORD(v5) += v8;
      v7 += 20;
    }
    while ( v6 < v11 );
  }
  return v5;
}
