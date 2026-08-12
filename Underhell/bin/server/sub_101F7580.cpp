void __thiscall sub_101F7580(int this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // esi
  double v8; // st7
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // [esp+4h] [ebp-8h] BYREF
  int v13; // [esp+8h] [ebp-4h] BYREF

  if ( a2 >= 0 )
  {
    v3 = *(_DWORD *)(dword_106BBCDC + 48);
    v4 = 0;
    v13 = 0;
    if ( v3 > 0 )
    {
      if ( *(unsigned __int16 *)(this + 4882) > v3 )
      {
        do
        {
          v5 = *(unsigned __int16 *)(this + 4876);
          sub_101EF140((int *)(this + 4864), *(_WORD *)(this + 4876));
          *(_WORD *)(*(_DWORD *)(this + 4864) + 40 * v5 + 38) = *(_WORD *)(this + 4880);
          *(_WORD *)(this + 4880) = v5;
        }
        while ( *(unsigned __int16 *)(this + 4882) > *(int *)(dword_106BBCDC + 48) );
      }
      v4 = *(_DWORD *)(this + 4864) + 40 * (unsigned __int16)sub_101F74B0((int *)(this + 4864));
      v13 = v4;
    }
    v6 = dword_106B31C8;
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    {
      v7 = (_DWORD *)(this + 4216);
      v13 = *(_DWORD *)(dword_106B31C8 + 24) + *(_DWORD *)(dword_106B31C8 + 36) - a2;
      sub_101E9AC0(v7, &v13);
      v6 = dword_106B31C8;
    }
    else
    {
      v8 = *(float *)(dword_106BBC94 + 44) * 0.001;
      if ( v8 <= 1.0 )
      {
        if ( v8 < 0.0 )
          v8 = 0.0;
      }
      else
      {
        v8 = 1.0;
      }
      v9 = (int)(v8 / *(float *)(dword_106B31C8 + 28) + 0.5);
      v10 = a2 + *(_DWORD *)(this + 4216);
      v7 = (_DWORD *)(this + 4216);
      v11 = v9 + *(_DWORD *)(dword_106B31C8 + 24);
      if ( v10 <= v11 + v9 && v10 >= *(_DWORD *)(dword_106B31C8 + 24) )
      {
        v4 = v13;
      }
      else
      {
        v4 = v13;
        v12 = v11 + *(_DWORD *)(dword_106B31C8 + 36) - a2;
        if ( v13 )
          *(_DWORD *)(v13 + 8) = v9;
        sub_101E9AC0(v7, &v12);
        v6 = dword_106B31C8;
      }
    }
    if ( v4 )
      *(float *)(v4 + 12) = (double)(a2 + *v7 + *(_DWORD *)(v6 + 36)) * *(float *)(v6 + 28);
  }
}
