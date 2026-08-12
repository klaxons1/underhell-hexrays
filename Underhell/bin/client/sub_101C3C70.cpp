char __cdecl sub_101C3C70(unsigned __int16 *Src, int a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  size_t v10; // eax
  int v11; // eax
  void *v12; // esp
  int (*v13)(); // eax
  int v14; // ecx
  char *v15; // ebx
  unsigned __int16 *v16; // esi
  char *v17; // esi
  size_t v18; // ebx
  unsigned __int16 *v19; // edi
  _BYTE v20[12]; // [esp+0h] [ebp-18h] BYREF
  int (*v21)(); // [esp+Ch] [ebp-Ch]
  int (*v22)(); // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]
  int v24; // [esp+24h] [ebp+Ch]
  int v25; // [esp+24h] [ebp+Ch]

  switch ( a2 )
  {
    case 25:
      if ( a4 == 28 )
      {
        sub_101BFBF0(Src, (int)a3, a5, a6);
        return 1;
      }
      if ( a4 == 24 )
      {
        sub_101C26C0(Src, (int)a3, a5, a6);
        return 1;
      }
      break;
    case 24:
      switch ( a4 )
      {
        case 28:
          sub_101C2560(Src, (int)a3, a5, a6);
          return 1;
        case 29:
          sub_101C25C0((int)Src, (int)a3, a5, a6, a7);
          return 1;
        case 25:
          sub_101C2780((unsigned int)Src, (int)a3, a5, a6);
          return 1;
      }
      break;
    case 28:
      switch ( a4 )
      {
        case 25:
          sub_101BFD50((unsigned int)Src, (int)a3, a5, a6);
          return 1;
        case 24:
          sub_101C2660((float *)Src, (int)a3, a5, a6);
          return 1;
        case 0:
          sub_101BFE60((int)Src, (int)a3, a5, a6);
          return 1;
        case 12:
          sub_101C0120((int)Src, (int)a3, a5, a6);
          return 1;
      }
      break;
  }
  if ( (a4 == 13 || a4 == 14 || a4 == 15 || a4 == 38 || a4 == 37) && a2 == a4 )
  {
    v10 = sub_101BD420(a5, a6, 1, a2, 0);
    memcpy_0(a3, Src, v10);
    return 1;
  }
  if ( (!a2 || a2 == 2 || a2 == 12 || a2 == 16) && (a4 == 13 || a4 == 14 || a4 == 15) )
    return sub_101BFA10((int)Src, a2, (int)a3, a4, a5, a6, a7, a8);
  if ( a2 == 11 && (a4 == 38 || a4 == 37) )
    return sub_101BF900(Src, 11, (int)a3, a4, a5, a6, a7, a8);
  if ( (!a4 || a4 == 16 || a4 == 12 || a4 == 19 || a4 == 21 || a4 == 18 || a4 == 17 || a4 == 3 || a4 == 2)
    && (a2 == 13 || a2 == 14 || a2 == 15 || a2 == 38 || a2 == 37) )
  {
    if ( a7 || a8 )
      return 0;
    switch ( a2 )
    {
      case 13:
        if ( a4 )
        {
          switch ( a4 )
          {
            case 12:
            case 16:
              sub_101C2990(a6, (int)Src, (int *)a3, a5);
              return 1;
            case 2:
              sub_101C2AF0(a6, Src, (int *)a3, a5);
              return 1;
            case 3:
              sub_101C2C50(a6, Src, (int *)a3, a5);
              return 1;
            case 17:
              sub_101C2DB0(a6, (int)Src, (int *)a3, a5);
              return 1;
            case 21:
            case 18:
              sub_101C2EF0(a6, (int)Src, (int *)a3, a5);
              return 1;
            default:
              sub_101C3040(a6, (int)Src, (int *)a3, a5);
              return 1;
          }
        }
        else
        {
          sub_101C2840(a6, (int)Src, (int *)a3, a5);
          return 1;
        }
      case 37:
        if ( a4 == 12 )
        {
          sub_101C3190(a6, a5, (unsigned __int8 *)Src, (int *)a3, 1);
          return 1;
        }
        return 0;
      case 38:
        if ( a4 == 12 )
        {
          sub_101C3190(a6, a5, (unsigned __int8 *)Src, (int *)a3, 0);
          return 1;
        }
        return 0;
      case 15:
        if ( a4 )
        {
          switch ( a4 )
          {
            case 12:
            case 16:
              sub_101C3430(a6, (int)Src, (int *)a3, a5);
              return 1;
            case 2:
              sub_101C35A0(a6, (int)Src, (int *)a3, a5);
              return 1;
            case 3:
              sub_101C3700(a6, (int)Src, (int *)a3, a5);
              return 1;
            case 17:
              sub_101C3860(a6, (int)Src, (int *)a3, a5);
              return 1;
            case 21:
            case 18:
              sub_101C39B0(a6, (int)Src, (int *)a3, a5);
              return 1;
            default:
              sub_101C3B10(a6, (int)Src, (int *)a3, a5);
              return 1;
          }
        }
        else
        {
          sub_101C32C0(a6, (int)Src, (int *)a3, a5);
          return 1;
        }
      default:
        return 0;
    }
  }
  else
  {
    if ( a4 == 13
      || a4 == 14
      || a4 == 15
      || a4 == 38
      || a4 == 37
      || a2 == 13
      || a2 == 14
      || a2 == 15
      || a2 == 38
      || a2 == 37 )
    {
      return 0;
    }
    v24 = sub_101BD390(a2);
    v11 = sub_101BD390(a4);
    if ( !a7 )
      a7 = a5 * v24;
    if ( !a8 )
      a8 = a5 * v11;
    if ( a2 != a4 && (a2 != 12 || a4 != 16) )
    {
      v12 = alloca(4 * a5);
      v22 = sub_101C2370(a2);
      v13 = sub_101C2470(a4);
      v21 = v13;
      if ( v14 && v13 )
      {
        if ( a6 > 0 )
        {
          v15 = a3;
          v16 = Src;
          v23 = a6;
          do
          {
            ((void (__cdecl *)(unsigned __int16 *, _BYTE *, int))v22)(v16, v20, a5);
            ((void (__cdecl *)(_BYTE *, char *, int))v21)(v20, v15, a5);
            v16 = (unsigned __int16 *)((char *)v16 + a7);
            v15 += a8;
            --v23;
          }
          while ( v23 );
          return 1;
        }
        return 1;
      }
      return 0;
    }
    if ( a6 <= 0 )
      return 1;
    v17 = a3;
    v18 = a5 * v24;
    v19 = Src;
    v25 = a6;
    do
    {
      memcpy_0(v17, v19, v18);
      v17 += a8;
      v19 = (unsigned __int16 *)((char *)v19 + a7);
      --v25;
    }
    while ( v25 );
    return 1;
  }
}
