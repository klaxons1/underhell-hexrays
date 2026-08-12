int __usercall sub_102181D0@<eax>(_DWORD *a1@<eax>, int *a2, char *String1)
{
  int result; // eax
  __int16 v6; // dx
  int v7; // edx
  int (__thiscall *v8)(int *, _DWORD *); // edx
  int v9; // edi
  void (__thiscall *v10)(int, _DWORD *, _DWORD *); // eax
  void (__thiscall *v11)(int, _DWORD *, _DWORD *); // edx
  _BYTE v12[1596]; // [esp+Ch] [ebp-710h] BYREF
  _BYTE v13[180]; // [esp+648h] [ebp-D4h] BYREF
  _DWORD v14[3]; // [esp+6FCh] [ebp-20h] BYREF
  _DWORD v15[2]; // [esp+708h] [ebp-14h] BYREF
  char v16; // [esp+710h] [ebp-Ch]
  _DWORD v17[2]; // [esp+714h] [ebp-8h] BYREF
  char *String1a; // [esp+728h] [ebp+Ch]

  *a1 = 0;
  a1[2] = 0;
  *((_BYTE *)a1 + 4) = String1[52];
  memset(a1 + 3, 0, 0x240u);
  a1[171] = 0;
  a1[172] = 0;
  a1[173] = 0;
  a1[174] = 0;
  a1[175] = 0;
  result = *((_DWORD *)String1 + 1);
  if ( result )
  {
    v6 = *(_WORD *)result;
    result = 0x7FFF;
    if ( (v6 & 0x7FFFu) <= 0x18 )
    {
      v7 = *a2;
      *(float *)&v14[2] = 3.0;
      v8 = *(int (__thiscall **)(int *, _DWORD *))(v7 + 92);
      v14[0] = 0;
      v14[1] = 15;
      a1[2] = v8(a2, v14);
      v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF0 + 152))(
             dword_106BAFF0,
             *(_DWORD *)(*((_DWORD *)String1 + 1) + 8));
      while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) )
      {
        String1a = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
        if ( !_stricmp(String1a, "solid") )
        {
          (*(void (__thiscall **)(int, _BYTE *, int (__stdcall ***)(int, char *, char *)))(*(_DWORD *)v9 + 12))(
            v9,
            v12,
            &off_1063AFBC);
          sub_10217BB0((int)v12, a1, (int)a2, String1);
        }
        else if ( !_stricmp(String1a, "ragdollconstraint") )
        {
          (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v9 + 20))(v9, v13, 0);
          sub_10217CF0((int)v13, (int)a2, (int)a1, (int)String1);
        }
        else if ( !_stricmp(String1a, "collisionrules") )
        {
          v15[1] = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106BAFE8 + 40))(
                     dword_106BAFE8,
                     *((_DWORD *)String1 + 3),
                     *a1);
          v10 = *(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v9 + 28);
          v15[0] = &CRagdollCollisionRules::`vftable';
          v16 = 1;
          v10(v9, v15, v15);
        }
        else if ( !_stricmp(String1a, "animatedfriction") )
        {
          v11 = *(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v9 + 28);
          v17[0] = &CRagdollAnimatedFriction::`vftable';
          v17[1] = a1;
          v11(v9, v17, v17);
        }
        else
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9);
        }
      }
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0, v9);
    }
  }
  return result;
}
