void __thiscall sub_10122880(int this)
{
  double v2; // st7
  double v3; // st6
  bool v4; // zf
  int *v5; // eax
  int v6; // edi
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  float v10; // [esp+0h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  v2 = ((double (__thiscall *)(int (__stdcall ***)(char)))(*off_103DFD80)[9])(off_103DFD80);
  v12 = v2;
  v3 = v2 - *(float *)(this + 60);
  v11 = v3;
  if ( v3 < 0.0 )
    v11 = 0.0;
  v4 = *(_DWORD *)(this + 48) == 0;
  *(float *)(this + 60) = v2;
  if ( !v4 )
  {
    do
    {
      v5 = *(int **)(this + 36);
      v6 = *v5;
      if ( v2 < *(float *)(*v5 + 4) )
        break;
      sub_10121BD0((int *)(this + 36));
      sub_101226E0(v6);
      sub_1022FD10(v6);
      v2 = v12;
    }
    while ( *(_DWORD *)(this + 48) );
  }
  v7 = *(_DWORD *)(this + 28) - 1;
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(this + 16) + 4 * v7);
      v10 = v2;
      if ( !sub_101223D0(v8, v10, v11) )
      {
        *(float *)(v8 + 36) = 0.0;
        v9 = *(_DWORD *)(this + 28);
        if ( v9 > 0 )
        {
          *(_DWORD *)(*(_DWORD *)(this + 16) + 4 * v7) = *(_DWORD *)(*(_DWORD *)(this + 16) + 4 * v9 - 4);
          --*(_DWORD *)(this + 28);
        }
      }
      if ( --v7 < 0 )
        break;
      v2 = v12;
    }
  }
}
