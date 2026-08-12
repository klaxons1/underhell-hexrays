void __fastcall sub_10370010(int *a1, int a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  float v10[3]; // [esp+Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v4 = *a3;
  if ( *a3 == dword_106E8144 )
  {
    if ( !*((_BYTE *)a1 + 3657) )
    {
      v5 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
      if ( v5 )
      {
        if ( *((_BYTE *)a1 + 3652) )
        {
          (*(void (__thiscall **)(int *, _DWORD, _BYTE *, _DWORD))(*a1 + 2208))(a1, 0, (_BYTE *)a1 + 3632, 0);
        }
        else
        {
          v6 = *a1;
          v7 = (*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 504))(v5, v10, 0);
          (*(void (__thiscall **)(int *, _DWORD, int))(v6 + 2208))(a1, 0, v7);
        }
        *((_BYTE *)a1 + 3652) = 0;
      }
      else
      {
        (*(void (__thiscall **)(int *, int, float *, _DWORD))(*a1 + 2208))(a1, 1, &flt_106F1CA8, 0);
      }
    }
  }
  else if ( v4 == dword_106E8124 )
  {
    sub_100E0970((int)a1, a2, 3, 0);
    sub_100EA9A0(a1, 1);
    sub_100EA9A0(a1, 1024);
    v10[0] = 0.0;
    v10[1] = 0.0;
    v10[2] = -128.0;
    sub_100DD660((int)a1, v10);
  }
  else if ( v4 == dword_106E8140 )
  {
    (*(void (__thiscall **)(int *))(*a1 + 2228))(a1);
    v8 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
    if ( v8 )
    {
      v9 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v8 + 504))(v8, v10);
      a1[908] = *(int *)v9;
      a1[909] = *((int *)v9 + 1);
      a1[910] = *((int *)v9 + 2);
      *((_BYTE *)a1 + 3652) = 1;
    }
  }
  else if ( v4 == dword_106E8130 )
  {
    sub_1023C380(a1, (int)"NPC_Headcrab.BurrowIn", 0.0, 0);
    sub_1036CAD0((int)a1, (int)&savedregs, (int)a1, 1);
  }
  else if ( v4 == dword_106E812C )
  {
    sub_1036DD60((int)a1, 1);
  }
  else if ( v4 == dword_106E8128 )
  {
    if ( *((_BYTE *)a1 + 3655) )
    {
      sub_1023C380(a1, (int)"NPC_Headcrab.BurrowOut", 0.0, 0);
      sub_1036CAD0((int)a1, (int)&savedregs, (int)a1, 1);
      sub_1036DD60((int)a1, 0);
      sub_10044830(a1, 0.0);
    }
  }
  else
  {
    sub_1003AD70((int)a1, (int)a3);
  }
}
