void __usercall sub_10186110(int *a1@<ecx>, int a2@<esi>)
{
  int *v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int i; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  void (__thiscall *v12)(int *, int, _BYTE *, _DWORD *); // edx
  _BYTE v14[12]; // [esp+4h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-4h]

  if ( dword_1040D3A8 )
  {
    v3 = a1 + 84;
    v4 = a1 + 84;
    v5 = 17;
    do
    {
      v4[1] = 0;
      *v4 = 1;
      v4 += 80;
      --v5;
    }
    while ( v5 );
    for ( i = 1; i <= *((_DWORD *)off_103DC81C + 5); v3 += 80 )
    {
      if ( dword_1040D3A8
        && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 16))(
             dword_1040D3A8 + 1192,
             i) )
      {
        v3[1] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 56))(
                  dword_1040D3A8 + 1192,
                  i,
                  a2);
        if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 20))(
                dword_1040D3A8 + 1192,
                i) )
          v3[1] = 0;
        a2 = i;
        if ( *v3 != (*(int (__thiscall **)(int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 52))(dword_1040D3A8 + 1192) )
        {
          v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 52))(dword_1040D3A8 + 1192, i);
          *v3 = v7;
          v8 = a1[(*(int (__thiscall **)(int *, int))(*a1 + 168))(a1, v7) + 1478];
          v9 = *v3;
          *(v3 - 10) = v8;
          *(v3 - 9) = a1[(*(int (__thiscall **)(int *, int))(*a1 + 168))(a1, v9) + 1446];
        }
      }
      v10 = sub_1012D2F0(i);
      v16 = v10;
      if ( v10 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v10 + 8) + 32))(v10 + 8) )
        {
          (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v16 + 532))(v16, v14);
          v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 536))(v16);
          v15[0] = *v11;
          v15[1] = v11[1];
          v12 = *(void (__thiscall **)(int *, int, _BYTE *, _DWORD *))(a1[62] + 12);
          v15[2] = v11[2];
          v12(a1 + 62, i - 1, v14, v15);
        }
      }
      ++i;
    }
  }
}
