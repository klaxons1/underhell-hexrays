_DWORD *__thiscall sub_1025EB20(int this, _DWORD *a2)
{
  const char *v3; // eax

  sub_1023B220((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 220) )
    sub_1022ABA0(a2, "image", *(const char **)(this + 220));
  if ( *(_DWORD *)(this + 224) )
    sub_1022ABA0(a2, "imagecolor", *(const char **)(this + 224));
  switch ( *(_DWORD *)(this + 204) )
  {
    case 0:
      v3 = "north-west";
      break;
    case 1:
      v3 = "north";
      break;
    case 2:
      v3 = "north-east";
      break;
    case 5:
      v3 = "east";
      break;
    case 6:
      v3 = "south-west";
      break;
    case 7:
      v3 = "south";
      break;
    case 8:
      v3 = "south-east";
      break;
    default:
      v3 = "center";
      break;
  }
  sub_1022ABA0(a2, "imageAlignment", v3);
  sub_1022ACA0(a2, "preserveAspectRatio", *(unsigned __int8 *)(this + 208));
  return sub_1022ACA0(a2, "filtered", *(unsigned __int8 *)(this + 209));
}
