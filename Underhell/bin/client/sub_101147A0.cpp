void __usercall sub_101147A0(int a1@<ebx>, _DWORD *a2, int a3, int a4)
{
  int v5; // esi
  const char *v6; // eax
  int v7; // eax
  void (__thiscall *v8)(int, _DWORD *, _DWORD *); // edx
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v12; // esi
  _DWORD *v13; // edi
  _DWORD v14[2]; // [esp+4h] [ebp-10h] BYREF
  char v15; // [esp+Ch] [ebp-8h]
  int v16; // [esp+10h] [ebp-4h]
  char v17; // [esp+23h] [ebp+Fh]

  if ( a3 )
  {
    if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436248 + 44))(dword_10436248, a4) )
    {
      v16 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10436248 + 40))(dword_10436248, a4, *a2);
      if ( v16 )
      {
        v17 = 0;
        v5 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10436250 + 152))(
               dword_10436250,
               *(_DWORD *)(a3 + 8),
               a1);
        while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) )
        {
          v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
          if ( !_stricmp(v6, "collisionrules") )
          {
            v7 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10436248 + 40))(dword_10436248, a4, *a2);
            v8 = *(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v5 + 28);
            v14[1] = v7;
            v14[0] = &CRagdollCollisionRules::`vftable';
            v15 = 1;
            v8(v5, v14, v14);
            v17 = 1;
          }
          else
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
          }
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436250 + 156))(dword_10436250, v5);
        if ( !v17 )
        {
          v9 = *a2;
          v10 = 0;
          if ( (int)*a2 > 0 )
          {
            do
            {
              v11 = v10 + 1;
              if ( v10 + 1 < v9 )
              {
                do
                  (**(void (__thiscall ***)(int, int, int))v16)(v16, v10, v11++);
                while ( v11 < *a2 );
                v11 = v10 + 1;
              }
              v9 = *a2;
              v10 = v11;
            }
            while ( v11 < *a2 );
          }
          v12 = 0;
          if ( (int)*a2 > 0 )
          {
            v13 = a2 + 8;
            do
            {
              if ( (int)*v13 >= 0 )
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 4))(v16, v12, *v13);
              ++v12;
              v13 += 6;
            }
            while ( v12 < *a2 );
          }
        }
      }
    }
  }
}
