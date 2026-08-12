void __thiscall sub_1019C0E0(float *this, float *a2, float *a3, float *a4)
{
  int i; // ebx
  float **v6; // esi
  float v7; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    switch ( i )
    {
      case 0:
        v6 = (float **)(this + 8);
        goto LABEL_8;
      case 1:
        v6 = (float **)(this + 9);
        goto LABEL_8;
      case 2:
        v6 = (float **)(this + 10);
        goto LABEL_8;
      case 3:
        v6 = (float **)(this + 11);
        goto LABEL_8;
      case 4:
        v6 = (float **)(this + 12);
LABEL_8:
        if ( v6 && *v6 == a2 )
        {
          v7 = sub_1018AF90(a3, this);
          if ( sub_1018AF90(a4, this) <= v7 )
            *v6 = a4;
          else
            *v6 = a3;
        }
        break;
      default:
        continue;
    }
  }
}
