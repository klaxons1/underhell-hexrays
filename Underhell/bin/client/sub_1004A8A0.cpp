void __thiscall sub_1004A8A0(int this)
{
  unsigned int v2; // ecx
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  char v10; // bl
  _BYTE *v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14[1024]; // [esp+4h] [ebp-100Ch] BYREF
  int v15; // [esp+1004h] [ebp-Ch]
  int v16; // [esp+1008h] [ebp-8h]
  int v17; // [esp+100Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 312);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (v2 & 0xFFF) + 4);
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 164))(v5);
        v15 = v6;
        if ( v6 )
        {
          if ( !*(_DWORD *)(this + 1248) && !*(_DWORD *)(this + 1212) )
          {
            if ( sub_10025550(v6) )
            {
              v7 = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v15 + 240))(v15, v14, 1024);
              if ( v7 > 0 )
              {
                if ( this == 12 )
                  v8 = 0;
                else
                  v8 = this + 1180;
                v9 = 0;
                *(_DWORD *)(this + 1248) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436254 + 116))(
                                             dword_10436254,
                                             v8);
                do
                  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 1248) + 8))(
                    *(_DWORD *)(this + 1248),
                    v14[v9++],
                    1);
                while ( v9 < v7 );
              }
            }
          }
          v16 = (int)((1.0 - sub_10049070((float *)(this - 12))) * 255.0);
          v10 = v16;
          v16 = (int)(sub_10049130((float *)(this - 12)) * 255.0);
          HIBYTE(v16) = v16;
          sub_10035090(v11, 1, 0);
          LOBYTE(v17) = v10;
          BYTE1(v17) = v10;
          BYTE2(v17) = v10;
          v12 = v15;
          HIBYTE(v17) = HIBYTE(v16);
          if ( *(_DWORD *)(v15 + 88) != v17 )
            *(_DWORD *)(v15 + 88) = v17;
          if ( sub_10049130((float *)(this - 12)) <= 0.2 )
            *(_BYTE *)(this + 1236) = 1;
          if ( sub_100490E0((float *)(this - 12)) <= 0.0 )
          {
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_10413184 + 20))(
              140,
              *(unsigned __int16 *)(this + 378));
            sub_10036200((unsigned __int16 *)(this - 12));
            if ( !*(_BYTE *)(this + 1244) )
            {
              (*(void (__thiscall **)(int))(*(_DWORD *)(this - 4) + 4))(this - 4);
              v13 = __RTDynamicCast(
                      v12,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&C_BaseAnimating `RTTI Type Descriptor',
                      (int)&C_ClientRagdoll `RTTI Type Descriptor',
                      0);
              if ( v13 )
                *(_BYTE *)(v13 + 1996) = 1;
            }
          }
        }
      }
    }
  }
}
