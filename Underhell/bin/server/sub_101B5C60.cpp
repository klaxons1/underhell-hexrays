void __thiscall sub_101B5C60(_DWORD *this, _DWORD *a2, float a3, int a4, int a5, int a6)
{
  float *v7; // ebx
  unsigned int v8; // eax
  _DWORD *v9; // edx
  float *v10; // ecx
  int v11[3]; // [esp+34h] [ebp-18h] BYREF
  float v12[3]; // [esp+40h] [ebp-Ch] BYREF
  int v13; // [esp+64h] [ebp+18h]

  ++this[87];
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a6 + 4))(a6, v11);
  (*(void (__thiscall **)(_DWORD *, int *, float *))(*a2 + 212))(a2, v11, v12);
  v13 = (*(int (__thiscall **)(_DWORD *))(*a2 + 68))(a2);
  if ( v13 )
  {
    v7 = 0;
    v8 = 0;
    v9 = &unk_106B9F48;
    while ( 1 )
    {
      if ( !*v9 && !v7 )
        v7 = (float *)(v9 - 1);
      if ( *v9 == v13 )
        break;
      ++v8;
      v9 += 4;
      if ( v8 >= 4 )
      {
        v10 = v7;
        goto LABEL_9;
      }
    }
    v10 = (float *)((char *)&unk_106B9F44 + 16 * v8);
LABEL_9:
    if ( v10 && *((_DWORD *)v10 + 1) && v10[3] + 0.5 > *(float *)(dword_106B31C8 + 12) )
    {
      v10[2] = *(float *)(dword_106B31C8 + 12);
      --this[87];
      return;
    }
    (*(void (__stdcall **)(_DWORD *, _DWORD, int, int))(*(_DWORD *)v13 + 616))(a2, LODWORD(a3), a4, a5);
  }
  sub_101DBD30((int)v11, v12[0], v12[1], v12[2], a3, a4, a5);
  --this[87];
}
