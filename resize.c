// determine old padding
int oldpadding = OLD PADDING calc
// determine new padding
int padding

// loop through each line
for (int i = 0; i < oldbiheight; i++)
{
    // read each line n times
    int ii = 0;
    while ( ii < n )
    {
        // loop through each pixel in a line
        for (int j = 0; j < oldbiwidth; j++)
        {
            // read each pixel
            // write each pixel three times
            for (int jj = 0; jj < n; jj++)
            {
                fwrite()
            }
        }
        // write new padding
        // increment while condition to break at nth iteration
        ii++;
        // set read pointer back to beginning
        fseek(inptr TO BEGINNING OF LINE);
    }
    // skip old padding
    fseek(inptr TO END OF LINE plus padding
}
