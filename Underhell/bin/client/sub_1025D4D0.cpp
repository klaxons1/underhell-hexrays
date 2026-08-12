void __usercall sub_1025D4D0(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  int (__thiscall ***v4)(void *, int, int); // eax
  int v5; // eax
  int (__thiscall ***v6)(void *, int, int); // eax
  int (__thiscall ***v7)(void *, int, int); // eax
  int v8; // eax
  int (__thiscall ***v9)(void *, int, int); // eax
  int v10; // eax
  int (__thiscall ***v11)(void *, int, int); // eax
  int v12; // eax
  int v13; // eax
  int (__thiscall ***v14)(void *, int, int); // eax
  int (__thiscall ***v15)(void *, int, int); // eax
  int v16; // eax
  int (__thiscall ***v17)(void *, int, int); // eax
  int (__thiscall ***v18)(void *, int, int); // eax
  int v19; // [esp-4h] [ebp-1Ch]
  int v20; // [esp+0h] [ebp-18h]
  int v21; // [esp+8h] [ebp-10h] BYREF
  int v22; // [esp+Ch] [ebp-Ch] BYREF
  long double v23; // [esp+10h] [ebp-8h]

  if ( sub_10237C80(dword_103FD3B0) )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
    {
      v3 = sub_10237C80(dword_103FD3B0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 936))(v3, 0);
      v4 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
      sub_10254AE0(v4, a2);
    }
    else
    {
      v5 = sub_10237C80(dword_103FD3B0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 936))(v5, 0);
      v6 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
      sub_10254AE0(v6, a2);
      v7 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
      sub_102361D0(v7, (int)&v21, (int)&v22);
      v23 = sqrt((double)v21 * (double)v22 + (double)v21 * (double)v22);
      v8 = sub_10237C80(dword_103FD3B0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 936))(v8, 1);
      v20 = (int)(0.0 * v23);
      v19 = (int)v23;
      v9 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
      sub_102361A0(v9, v19, v20);
      v10 = sub_10237C80(dword_103FD3B0);
      sub_10253150(v10);
      v11 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
      sub_102361D0(v11, (int)&v21, (int)&v22);
      if ( v21 < 100 && (v12 = sub_10237C80(dword_103FD3B0), sub_10261C40(v12) == 2) )
      {
        v13 = sub_10237C80(dword_103FD3B0);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 936))(v13, 0);
        v14 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
        sub_10254AE0(v14, a2);
      }
      else
      {
        while ( (double)v21 / (double)v22 < 2.0 )
        {
          v15 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
          sub_102361A0(v15, v21 + 1, v22);
          v16 = sub_10237C80(dword_103FD3B0);
          sub_10253150(v16);
          v17 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
          sub_102361D0(v17, (int)&v21, (int)&v22);
        }
      }
      v18 = (int (__thiscall ***)(void *, int, int))sub_10237C80(dword_103FD3B0);
      sub_102361D0(v18, (int)&v21, (int)&v22);
    }
  }
}
