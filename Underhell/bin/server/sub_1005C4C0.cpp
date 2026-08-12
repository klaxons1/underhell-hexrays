void __userpurge sub_1005C4C0(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  float v11[3]; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+18h] [ebp-Ch] BYREF
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  if ( *a3 == 100000 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] == v6 )
            v7 = *v5;
          else
            v7 = 0;
          sub_100F9B80(v7);
        }
      }
    }
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) )
    {
      v8 = sub_100217F0(*(void **)(a1 + 4));
      v12 = *(int *)v8;
      v13 = *(float *)(v8 + 4);
      v14 = *(float *)(v8 + 8);
      sub_10078720((int)&v12, -1.0);
    }
    sub_1005C150(a1, (int)&savedregs, a2, a1);
    v9 = *(_DWORD *)(a1 + 4);
    if ( (*(_BYTE *)(v9 + 256) & 1) != 0 )
    {
      v10 = sub_101C5260(v9);
      if ( v10 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10) )
      {
        (*(void (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)v10 + 528))(v10, &v12, 0, 0);
        v11[0] = *(float *)&v12 * -500.0;
        v11[1] = v13 * -500.0;
        v11[2] = -500.0 * v14;
        sub_100DD660(v11);
      }
      else
      {
        sub_1010DD80(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 4), 0.0);
        sub_100EA9A0(1024);
        sub_1005C2D0((_DWORD *)a1);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, 0);
      }
    }
  }
  else
  {
    sub_1004B450((_BYTE *)a1, (int)a3);
  }
}
