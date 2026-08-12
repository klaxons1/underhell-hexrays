void __thiscall sub_1023E6B0(_DWORD *this, float *a2)
{
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  int v5; // edi
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-8h]

  switch ( *((_DWORD *)a2 + 3) )
  {
    case 0:
      sub_1023DC50(*(_DWORD *)a2, a2[4], a2[2]);
      break;
    case 1:
      v2 = a2[4];
      v3 = *(_DWORD *)a2;
      v4 = a2[2];
      *(_DWORD *)(v3 + 60) |= 2u;
      v7 = v4;
      v6 = v2;
      sub_1023DBC0((float *)v3, v6, v7);
      break;
    case 2:
      sub_1023DDF0(*(_DWORD **)a2);
      break;
    case 3:
      sub_1023E190(this, *(_DWORD **)a2);
      v5 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 )
      {
        --dword_106C5038;
        sub_102375F0((int *)(v5 + 84));
        *(_DWORD *)(v5 + 76) = &IRecipientFilter::`vftable';
        sub_1042FBE0(v5);
      }
      *a2 = 0.0;
      break;
    default:
      return;
  }
}
