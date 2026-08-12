void __thiscall sub_101B3500(int this, int a2, int a3, char a4)
{
  int v5; // edi
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this - 60) )
  {
    if ( a4 )
    {
      if ( -1.0 == sub_100E9200((_DWORD *)(this - 860), 0) )
      {
        v5 = *(_DWORD *)(this - 60);
        v11 = (*(int (**)(void))(*(_DWORD *)v5 + 20))();
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 24))(v5);
        v7 = sub_101B03C0(v12, v6, v11);
        *(float *)(this + 48) = *(float *)(this + 104);
        *(float *)(this + 52) = *(float *)(this + 108);
        *(float *)(this + 56) = *(float *)(this + 112);
        *(float *)(this + 4) = *v7;
        *(float *)(this + 8) = v7[1];
        *(float *)(this + 12) = v7[2];
        *(float *)(this + 16) = *(float *)(dword_106B31C8 + 12);
        sub_100EC3F0((_DWORD *)(this - 860), (int)sub_101B2710, 0.0, 0);
        v10 = *(float *)(dword_106B31C8 + 12) + 0.090000004;
        sub_100EC4A0((int *)(this - 860), v10, 0);
      }
    }
    else if ( -1.0 != sub_100E9200((_DWORD *)(this - 860), 0) )
    {
      v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this - 60) + 24))(*(_DWORD *)(this - 60));
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
      {
        v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this - 60) + 20))(*(_DWORD *)(this - 60));
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) )
        {
          sub_101B0DF0((_DWORD *)(this + 4), this - 860);
          sub_100EC4A0((int *)(this - 860), -1.0, 0);
        }
      }
    }
  }
}
