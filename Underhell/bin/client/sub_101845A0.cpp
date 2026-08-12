void __thiscall sub_101845A0(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int *v6; // ecx
  int v7; // ebx
  int (__thiscall *v8)(int *, int, int); // edx
  int v9; // ebx
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // edx
  unsigned __int16 v13; // ax
  int v14; // edi
  int v15; // eax
  _BYTE v16[72]; // [esp+4h] [ebp-98h] BYREF
  int v17; // [esp+4Ch] [ebp-50h]
  int v18; // [esp+88h] [ebp-14h] BYREF
  _DWORD v19[2]; // [esp+8Ch] [ebp-10h] BYREF
  int v20; // [esp+94h] [ebp-8h]
  int v21; // [esp+98h] [ebp-4h]

  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 864))(this) )
    {
      if ( *((_DWORD *)off_103DC800 + 1) )
      {
        if ( *((_DWORD *)off_103DC800 + 2) )
        {
          v4 = a2;
          if ( (*(unsigned __int8 (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)dword_1041315C + 32))(
                 dword_1041315C,
                 a2,
                 v16) )
          {
            if ( v17 )
            {
              v5 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)off_103DC800 + 2) + 8))(*((_DWORD *)off_103DC800 + 2));
              v6 = (int *)*((_DWORD *)off_103DC800 + 1);
              v7 = *v6;
              v20 = v17;
              v8 = *(int (__thiscall **)(int *, int, int))(v7 + 32);
              v21 = (v5 << 24) | 0x100001;
              v9 = v8(v6, v17, v21);
              v18 = v9;
              if ( this[v4 + 79] != v9 )
              {
                this[v4 + 79] = v9;
                v19[0] = v9;
                if ( sub_10183520((_WORD *)this + 194, (int)v19) == -1 )
                {
                  v10 = (_DWORD *)sub_100DDA40(52);
                  if ( v10 )
                    v11 = sub_1012F2A0(v10);
                  else
                    v11 = 0;
                  sub_1012F420((int)v11, v20, v21);
                  v12 = *v11;
                  v11[9] = 32;
                  v11[10] = 32;
                  (*(void (__thiscall **)(int *, int, int))(v12 + 16))(v11, 55, 34);
                  a2 = sub_102790C0((char)v11);
                  sub_10184530((int)(this + 97), &v18, &a2);
                }
              }
              v19[0] = v9;
              v13 = sub_10183520((_WORD *)this + 194, (int)v19);
              if ( v13 != 0xFFFF )
              {
                v14 = 2 * v13;
                sub_1022ACA0("avatar", *(_DWORD *)(this[98] + 16 * v13 + 12));
                v15 = sub_10279020(*(_DWORD *)(this[98] + 8 * v14 + 12));
                sub_1012F180(v15);
              }
            }
          }
        }
      }
    }
  }
}
