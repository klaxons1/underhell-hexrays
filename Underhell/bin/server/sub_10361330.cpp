void __userpurge sub_10361330(int a1@<ecx>, int a2@<edi>, char a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int *v12; // edx
  unsigned int v13; // eax
  int v14; // ecx
  _BYTE v16[12]; // [esp+4h] [ebp-18h] BYREF
  _BYTE v17[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(a1 + 4184);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( *(_BYTE *)(a1 + 4288) == 1 )
        {
          if ( v5[1] == v6 )
            v7 = *v5;
          else
            v7 = 0;
          v8 = *(_DWORD *)(v7 + 424);
          if ( v5[1] == v6 )
            v9 = *v5;
          else
            v9 = 0;
          (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v9 + 140))(v9, 0, -1, a2);
          v10 = *(_DWORD *)(a1 + 4184);
          if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v10 >> 12 )
            v11 = 0;
          else
            v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 76))(v11, 0);
          sub_100BCCA0((void *)a1, *(_DWORD *)(a1 + 4192), (int)v16, (int)v17);
          if ( v8 )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 96))(v8);
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 284))(v8);
            (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)v8 + 180))(v8, v16, v17, 1);
          }
          else
          {
            Warning("CleanCatchAndThrow:   m_hPhysicsEnt->VPhysicsGetObject == NULL!\n");
          }
          v13 = *(_DWORD *)(a1 + 4184);
          if ( v13 == -1 || (v12 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v13 >> 12) )
            v14 = 0;
          else
            v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
          sub_100E0970(v14, (int)v12, *(_DWORD *)(a1 + 4280), 0);
          if ( v8 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
          sub_10360B50((_DWORD *)a1);
        }
        *(_DWORD *)(a1 + 4184) = -1;
      }
    }
  }
  if ( a3 == 1 )
  {
    *(float *)(a1 + 4176) = 0.0;
    *(float *)(a1 + 4172) = 0.0;
    *(_WORD *)(a1 + 4196) = 0;
    sub_10023CB0((char *)a1, 73);
  }
}
