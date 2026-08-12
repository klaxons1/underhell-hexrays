int *sub_101E0E00()
{
  if ( (dword_106BB220 & 1) == 0 )
  {
    dword_106BB220 |= 1u;
    dword_106BB204 = (int)"magnetted_objects_t";
    dword_106BB20C = 0;
    dword_106BB210 = 0;
    dword_106BB214 = 0;
    dword_106BB218 = 0;
    dword_106BB21C = 0;
    dword_106BB208 = 19;
    atexit(sub_10473260);
  }
  dword_1063B0C8 = 0;
  if ( (dword_106BB220 & 2) == 0 )
  {
    dword_106BB220 |= 2u;
    dword_1063C10C = (int)sub_101D3250(5);
    flt_1063C158 = 0.0;
    dword_1063C114 = 0;
    dword_1063C118 = 0;
    dword_1063C11C = 0;
    dword_1063C120 = 0;
    dword_1063C124 = 0;
    dword_1063C110 = 0;
    dword_1063C128 = 13;
    dword_1063C12C = (int)"hEntity";
    dword_1063C130 = 4;
    dword_1063C134 = 0;
    dword_1063C138 = 131073;
    dword_1063C13C = 0;
    dword_1063C140 = 0;
    dword_1063C144 = 0;
    dword_1063C148 = 0;
    dword_1063C14C = 4;
    dword_1063C150 = 0;
    dword_1063C154 = 0;
  }
  dword_1063B0C0 = 2;
  dword_1063B0BC = (int)&unk_1063C0F4;
  return &dword_1063B0BC;
}
