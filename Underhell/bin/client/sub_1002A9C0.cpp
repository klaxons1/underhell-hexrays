void __thiscall sub_1002A9C0(void *this, _DWORD *a2)
{
  int v3; // ebx
  _BYTE *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // [esp-4h] [ebp-B4h]
  _BYTE v13[48]; // [esp+10h] [ebp-A0h] BYREF
  _BYTE v14[48]; // [esp+40h] [ebp-70h] BYREF
  _BYTE v15[48]; // [esp+70h] [ebp-40h] BYREF
  int v16; // [esp+A0h] [ebp-10h]
  int v17; // [esp+A4h] [ebp-Ch]
  int v18; // [esp+A8h] [ebp-8h]
  int v19; // [esp+ACh] [ebp-4h]

  if ( !*((_DWORD *)this + 485) && (*(int (__thiscall **)(int))(*((_DWORD *)this + 1) + 36))((int)this + 4) )
    sub_10026520((int)this);
  v3 = *((_DWORD *)this + 485);
  v16 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)v3 )
    {
      v4 = (_BYTE *)*((_DWORD *)this + 311);
      if ( !v4 || !*v4 )
      {
        (*(void (__stdcall **)(_DWORD, int, int, _DWORD))(a2[1] + 64))(0, -1, 524032, *((float *)off_103DC81C + 3));
        (*(void (__thiscall **)(_DWORD *))(*a2 + 40))(a2);
        v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
        v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 40))(this);
        sub_101F0B70(v5, v12, v14);
        if ( *((_DWORD *)this + 311) || (v6 = sub_100DDA40(3596), (*((_DWORD *)this + 311) = v6) != 0) )
        {
          memset(*((void **)this + 311), 0, 0xE0Cu);
          v7 = *(_DWORD *)(*(_DWORD *)v3 + 156);
          **((_BYTE **)this + 311) = 1;
          *(float *)(*((_DWORD *)this + 311) + 4) = *((float *)off_103DC81C + 3);
          v8 = *((_DWORD *)this + 311);
          v9 = 0;
          v10 = 0;
          v17 = v7;
          *(_DWORD *)(v8 + 8) = v7;
          if ( v7 > 0 )
          {
            v18 = 0;
            v19 = 0;
            do
            {
              v11 = *(_DWORD *)(*(_DWORD *)(v16 + 64) + 4 * v10);
              if ( v11 == -1 )
                sub_101F0AB0(v14, v15);
              else
                sub_101F0AB0(a2[321] + 48 * v11, v15);
              sub_101EDC00(v15, v9 + a2[321], v13);
              sub_101F0930(v13, v18 + *((_DWORD *)this + 311) + 1548, v19 + *((_DWORD *)this + 311) + 12);
              v19 += 12;
              v18 += 16;
              ++v10;
              v9 += 48;
            }
            while ( v10 < v17 );
          }
        }
        else
        {
          Msg("Memory allocation of RagdollInfo_t failed!\n");
        }
      }
    }
  }
}
