int __userpurge sub_101C39E0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4, float a5)
{
  float v6; // edx
  float v7; // eax
  int *v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v14[3]; // [esp+10h] [ebp-18h] BYREF
  float v15[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v16; // [esp+34h] [ebp+Ch]

  *(float *)(a1 + 80) = a5;
  *(_BYTE *)(a1 + 48) = (*(_DWORD *)(a4 + 256) & 0x40000000) != 0;
  *(_DWORD *)(a1 + 16) = 0;
  sub_101C3810((_DWORD *)a1, a4);
  v6 = *(float *)(a4 + 720);
  v7 = *(float *)(a4 + 724);
  v15[0] = *(float *)(a4 + 716);
  v15[1] = v6;
  v15[2] = v7;
  sub_101C1E50(a4, a5, (float *)v14);
  sub_101C36C0((_DWORD *)a1, (float *)v14);
  if ( (*(unsigned __int8 (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 4))(a1, v14, a3, a2) )
  {
    sub_101C1B80((_DWORD *)a1, 0, 0);
    return 0;
  }
  else
  {
    v8 = (int *)(*(_DWORD *)(a1 + 24) + 104 * *(_DWORD *)(a1 + 44));
    v9 = v8[23];
    if ( v9 )
      sub_101C6C90(v9, v8 + 4);
    v16 = *v8;
    sub_100E10C0(a4, v15);
    v10 = *(_DWORD *)(a1 + 36) - 1;
    if ( v10 >= 0 )
    {
      v11 = 104 * v10;
      do
      {
        sub_100E0D20(*(_DWORD *)(*(_DWORD *)(a1 + 24) + v11), (float *)(*(_DWORD *)(a1 + 24) + v11 + 4));
        v11 -= 104;
        --v10;
      }
      while ( v10 >= 0 );
    }
    return v16;
  }
}
