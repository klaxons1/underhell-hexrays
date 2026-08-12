void __usercall sub_103D74B0(char **a1@<ecx>, int a2@<edi>)
{
  int v3; // edx
  const char **v4; // eax
  const char *v5; // edi
  char *v6; // eax
  int *v7; // ecx
  float v8; // [esp+24h] [ebp-4h] BYREF

  if ( a1[23] == "prop_coreball" || sub_100D6240(a1, "prop_coreball") )
  {
    sub_100E8220(a2, "models/props_combine/coreball.mdl");
    (*((void (__thiscall **)(char **, const char *))*a1 + 26))(a1, "models/props_combine/coreball.mdl");
    goto LABEL_7;
  }
  v4 = (const char **)(*((int (__thiscall **)(char **, float *))*a1 + 7))(a1, &v8);
  v5 = *v4;
  if ( *v4 && *v5 )
  {
    sub_100E8220((int)v5, *v4);
    (*((void (__thiscall **)(char **, const char *))*a1 + 26))(a1, v5);
LABEL_7:
    sub_100E0970((int)a1, v3, 0, 0);
    j_nullsub_4(a1);
    sub_100EAB80(a1, 16);
    sub_100C1170((int)a1, 0);
    v6 = a1[216];
    v8 = 1.0;
    if ( v6 != (char *)COERCE_INT(1.0) )
    {
      if ( *((_BYTE *)a1 + 84) )
      {
        *((_BYTE *)a1 + 88) |= 1u;
        *((float *)a1 + 216) = 1.0;
      }
      else
      {
        v7 = (int *)a1[6];
        if ( v7 )
          sub_100194B0(v7, 864);
        *((float *)a1 + 216) = 1.0;
      }
    }
    return;
  }
  if ( ((unsigned int)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  if ( ((unsigned int)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  if ( ((unsigned int)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  Warning(
    "prop_scalable at %.0f %.0f %0.f missing modelname\n",
    *((float *)a1 + 145),
    *((float *)a1 + 146),
    *((float *)a1 + 147));
  sub_1025FAC0((int)a1);
}
